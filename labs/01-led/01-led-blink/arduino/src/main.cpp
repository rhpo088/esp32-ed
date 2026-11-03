#include <Arduino.h>

constexpr int ledPid = 26;
constexpr int blinkFrequencyMs = 1000;

void setup() {
    pinMode(ledPid, OUTPUT);
}

void loop() {
    digitalWrite(ledPid, HIGH);
    delay(blinkFrequencyMs);
    digitalWrite(ledPid, LOW);
    delay(blinkFrequencyMs);
}