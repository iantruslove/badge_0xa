#include <Arduino.h>

int freq = 2000;
#define CHANNEL 0
int resolution = 8;

int pinoVermelho = 19; //pino que ligamos o LED vermelho
int pinoVerde = 16; //pino que ligamos o LED verde

int pinoTouchOn = 4; //pino com sensor touch (pode-se usar a constante nativa T0)
int pinoTouchBlink = 6; //pino com sensor touch (pode-se usar a constante nativa T4)
int capacitanciaMaxima = 20; //valor que nos da a certeza de toque (ache esse valor através da calibragem)


#define TOUCH_THRESHOLD 55

#define L_EAR 21
#define L_EYE 19
#define L_MUSTACHE 18
#define R_EAR 17
#define R_EYE 16
#define R_MUSTACHE 5


void bass(uint8_t);
void chord1(uint8_t);
void chord2(uint8_t);
void chord3(uint8_t);
void deedle1(uint8_t);
void deedle2(uint8_t);
void extra(uint8_t);

void setup()
{
  Serial.begin(115200);
  delay(1000);

  pinMode(L_EAR, OUTPUT);
  pinMode(L_EYE, OUTPUT);
  pinMode(L_MUSTACHE, OUTPUT);
  pinMode(R_EAR, OUTPUT);
  pinMode(R_EYE, OUTPUT);
  pinMode(R_MUSTACHE, OUTPUT);

  ledcSetup(CHANNEL, freq, resolution);
  ledcAttachPin(26, CHANNEL);
  delay(500);
}

#define DEBOUNCE_THRESHOLD 2

bool left_pressed, right_pressed, up_pressed, down_pressed, select_pressed;
uint8_t left_count = 0, right_count = 0, up_count = 0, down_count = 0, select_count = 0;
uint8_t left, right, up, down, select;

void loop()
{
  left = touchRead(T3);
  right = touchRead(T4);
  up = touchRead(T6);
  down = touchRead(T7);
  select = touchRead(T2);

  left_pressed = (left < TOUCH_THRESHOLD);
  right_pressed = (right < TOUCH_THRESHOLD);
  up_pressed = (up < TOUCH_THRESHOLD);
  down_pressed = (down < TOUCH_THRESHOLD);
  select_pressed = (select < TOUCH_THRESHOLD);

  if (left_pressed) {
    left_count++;
  } else {
    left_count = 0;
  }

  if (right_pressed) {
    right_count++;
  } else {
    right_count = 0;
  }

  if (up_pressed) {
    up_count++;
  } else {
    up_count = 0;
  }

  if (down_pressed) {
    down_count++;
  } else {
    down_count = 0;
  }

  if (select_pressed) {
    select_count++;
  } else {
    select_count = 0;
  }



  if (left_count > DEBOUNCE_THRESHOLD) {
    digitalWrite(L_EAR, HIGH);
    bass(CHANNEL);
  } else {
    digitalWrite(L_EAR, LOW);
  }

  if (right_count > DEBOUNCE_THRESHOLD) {
    digitalWrite(R_EAR, HIGH);
    chord1(CHANNEL);
  } else {
    digitalWrite(R_EAR, LOW);
  }

  if (up_count > DEBOUNCE_THRESHOLD) {
    digitalWrite(R_EYE, HIGH);
    chord2(CHANNEL);
  } else {
    digitalWrite(R_EYE, LOW);
  }

  if (down_count > DEBOUNCE_THRESHOLD) {
    digitalWrite(R_MUSTACHE, HIGH);
    chord3(CHANNEL);
  } else {
    digitalWrite(R_MUSTACHE, LOW);
  }

  if (select_count > DEBOUNCE_THRESHOLD) {
    digitalWrite(L_MUSTACHE, HIGH);
    deedle1(CHANNEL);
  } else {
    digitalWrite(L_MUSTACHE, LOW);
  }

  Serial.print("  left - "); Serial.print(left_pressed); Serial.print("   "); Serial.println(left);
  Serial.print(" right - "); Serial.print(right_pressed); Serial.print("   "); Serial.println(right);
  Serial.print("    up - "); Serial.print(up_pressed); Serial.print("   "); Serial.println(up);
  Serial.print("  down - "); Serial.print(down_pressed); Serial.print("   "); Serial.println(down);
  Serial.print("select - "); Serial.print(select_pressed); Serial.print("   "); Serial.println(select);

  Serial.println("");

  if (left_pressed || right_pressed || up_pressed || down_pressed || select_pressed) {
    Serial.println("Something's presssed");
  } else {
  }

  delay(30);
}


// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).

void tone(int tonePin, int frequency, double msecs) {
  ledcWriteTone(CHANNEL, frequency);
  delayMicroseconds(int(msecs*1000));
  ledcWriteTone(CHANNEL, 0);
}

