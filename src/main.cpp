#include <Arduino.h>

// Configuration for "myhome load" controller
constexpr int STATUS_LED_PIN = 2; // Default onboard LED on many ESP32 boards
constexpr unsigned long SERIAL_BAUD = 115200;

void setup() {
  Serial.begin(SERIAL_BAUD);
  delay(1000);

  pinMode(STATUS_LED_PIN, OUTPUT);
  digitalWrite(STATUS_LED_PIN, LOW);

  Serial.println(F("=================================="));
  Serial.println(F("  Project: myhome load (ESP32)   "));
  Serial.println(F("  System Initialized Successfully "));
  Serial.println(F("=================================="));
}

void loop() {
  // Heartbeat / status blink
  digitalWrite(STATUS_LED_PIN, HIGH);
  delay(500);
  digitalWrite(STATUS_LED_PIN, LOW);
  delay(1500);

  Serial.println(F("[myhome load] Running..."));
}

