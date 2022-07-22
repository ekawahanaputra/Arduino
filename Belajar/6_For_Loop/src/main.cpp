#include <Arduino.h>
// Documentasi For Loop
const int ledm = 5;
const int ledk = 4;
const int ledh = 0;

void setup() {
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}

void loop() {
  for (int i = 1; i <= 1000; i = i + 50){
    digitalWrite(ledm, HIGH);
    delay(i);
    digitalWrite(ledm, LOW);
    delay(i);
  }

  for (int x = 1000; x >= 50; x = x - 50){
    digitalWrite(ledk, HIGH);
    delay(x);
    digitalWrite(ledk, LOW);
    delay(x);
  }

  for (int y = 1; y <= 1000; y = y + 100){
    digitalWrite(ledh, HIGH);
    delay(y);
    digitalWrite(ledh, LOW);
    delay(y);

  }
  
}