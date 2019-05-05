#include <Arduino.h>
#include <WiFi.h>
#include <SPI.h>


#define SERVER
//#define CLIENT

// Replace with your network credentials
const char* ssid     = "the_jungle";
const char* password = "technicaltechnician";

const char* host = "192.168.4.1";


#ifdef CLIENT
#include "chord1.h"
#include "chord2.h"
#include "chord3.h"
#include "bass.h"
#include "deedle1.h"
#include "deedle2.h"
#include "extra.h"
#endif // defined CLIENT

#define freq 2000
#define CHANNEL 0
#define resolution 8

#define TOUCH_THRESHOLD 55

#define L_EAR 21
#define L_EYE 19
#define L_MUSTACHE 18
#define R_EAR 17
#define R_EYE 16
#define R_MUSTACHE 5



#ifdef SERVER
// Set web server port number to 80
WiFiServer server(80, 8);
WiFiClient* clients[] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
#define max_num_clients 8
#endif // defined SERVER

#define DEBOUNCE_THRESHOLD 2
#define LEFT 0
#define RIGHT 1
#define UP 2
#define DOWN 3
#define SELECT 4
#define NUM_BUTTONS 5

uint8_t touchpads[] = { T3, T4, T6, T7, T2 };
uint16_t touchpad_readings[] = { 0, 0, 0, 0, 0 };
bool pressed_this_loop[] = { false, false, false, false, false };
uint8_t debounce_count[] = { 0, 0, 0, 0, 0 };
bool pressed[] = { false, false, false, false, false };
uint8_t _output_pins[] = { L_EAR, R_EAR, L_EYE, R_EYE, R_MUSTACHE, L_MUSTACHE };
uint8_t* output_pins = &(_output_pins[0])f;

void setup() {
  Serial.begin(115200);
  
#ifdef SERVER  
  // Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  // Remove the password parameter, if you want the AP (Access Point) to be open
  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  server.begin();
#endif // defined SERVER  

#ifdef CLIENT

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
#endif //defined CLIENT

  pinMode(L_EAR, OUTPUT);
  pinMode(L_EYE, OUTPUT);
  pinMode(L_MUSTACHE, OUTPUT);
  pinMode(R_EAR, OUTPUT);
  pinMode(R_EYE, OUTPUT);
  pinMode(R_MUSTACHE, OUTPUT);

  ledcSetup(CHANNEL, freq, resolution);
  ledcAttachPin(26, CHANNEL);
}


#ifdef SERVER
bool add_client(WiFiClient* client) {
  for (byte i=0; i<max_num_clients; i++) {
    if (clients[i] == NULL) {
      Serial.print("Adding client to slot "); Serial.println(i);
      clients[i] = client;
      return true;
    }
  }
  Serial.println("OH NO! No room to allocate client.");
  return false;
}

void server_loop() {
  //Serial.print("Num client slots: "); Serial.println(max_num_clients);

  //  Clean out any disconnected clients
  for (byte i=0; i<max_num_clients; i++) {
    //Serial.print("Client "); Serial.print(i);

    if (clients[i]) {
      if (clients[i]->connected()) {
        //Serial.println(" connected");
        // Is there any data?
        while (clients[i]->available()) {
          Serial.print((char)(clients[i]->read()));
        }
      } else {
        Serial.println(" bailed");
        clients[i]->stop();
        delete clients[i];
        clients[i] = NULL;
      }
    } else {
      //Serial.println(" empty");
    }
  }

  for (byte n=0; n<NUM_BUTTONS; n++) {
    if (touchpads[n] == T3) {  // select?
      //Serial.println("Reading T2");
    } else {
      break;
    }

    touchpad_readings[n] = touchRead(touchpads[n]);
    pressed_this_loop[n] = (touchpad_readings[n] < TOUCH_THRESHOLD);

    if (pressed_this_loop[n]) {
      debounce_count[n] += 1;
    } else {
      debounce_count[n] = 0;
    }

    pressed[n] = (debounce_count[n] > DEBOUNCE_THRESHOLD);

    if (pressed[n]) {
      digitalWrite(output_pins[n], HIGH);
      
      for (byte i=0; i<max_num_clients; i++) {
        if (clients[i]) {
          if (clients[i]->connected()) {
            clients[i]->printf("%d\r", i);
            Serial.printf("----> client %d, button %d \n\n", i, output_pins[n]);
          }
        }
      }

    } else {
      digitalWrite(output_pins[n], LOW);
    }
}

  // See if there are any new clients to connect
  WiFiClient* client = server.available();   // Listen for incoming clients

  if (client) {
    if (client->connected()) {
      Serial.println("Connected!");
      add_client(client);
      //client->println("Hello!");
    } else {
      //Serial.println("Not connected!");
    }
  } else {
    //Serial.println("No client");
  }

  delay(50);
  //Serial.println("Loop");
}
#endif // defined SERVER

#ifdef CLIENT
void client_loop() {

  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
  } else {
    Serial.println("connected");
  }

  unsigned long timeout = millis();
  while (client.available() == 0) {
      if (millis() - timeout > 25000) {
          Serial.println(">>> Clien t Timeout !");
          client.stop();
          return;
      }
  }

  // Read all the lines of the reply from server and print them to Serial
  while(client.available()) {
      int c = client.read();
      Serial.println("Received:");
      Serial.print((char)c);
      if ((char)c == '0') {
        bass(CHANNEL);
      } else if ((char)c == '1') {
        chord1(CHANNEL);
      }else if ((char)c == '2') {
        chord2(CHANNEL);
      }else if ((char)c == '3') {
        chord3(CHANNEL);
      }else if ((char)c == '4') {
        deedle1(CHANNEL);
      }else if ((char)c == '5') {
        deedle2(CHANNEL);
      }else if ((char)c == '6') {
        extra(CHANNEL);
      }
  }
}
#endif // defined CLIENT

void loop() {
  #ifdef SERVER
  server_loop();
  #else
  client_loop();
  #endif
}