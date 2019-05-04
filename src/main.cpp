#include <Arduino.h>
#include "WiFi.h"
#include <SPI.h>


#include "chord1.h"
#include "chord2.h"
#include "chord3.h"
#include "bass.h"
#include "deedle1.h"
#include "deedle2.h"
#include "extra.h"

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
uint8_t output_pins[] = { L_EAR, R_EAR, R_EYE, R_MUSTACHE, L_MUSTACHE };

void loop()
{
  for (byte n=0; n<NUM_BUTTONS; n++) {
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
      deedle1(CHANNEL);
    } else {
      digitalWrite(output_pins[n], LOW);
    }
  }

  delay(30);
}

