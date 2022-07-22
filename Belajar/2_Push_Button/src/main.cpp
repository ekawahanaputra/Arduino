#include <Arduino.h>

const int button = 4;

void setup() {
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(button));
  delay(1000);
}