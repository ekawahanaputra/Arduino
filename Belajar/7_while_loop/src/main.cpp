#include <Arduino.h>

const int ledm = 5;
const int ledk = 4;
const int ledp = 0;


void setup() {
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledp, OUTPUT);
}

void loop() {
  int x = 1;
  while (x <= 10)
  {
    digitalWrite(ledm, HIGH);
    digitalWrite(ledk, HIGH);
    delay(500);
    digitalWrite(ledm, LOW);
    digitalWrite(ledk, LOW);
    delay(500);
    x++;
  }

  int y = 1;
  while (y <= 10)
  {
    digitalWrite(ledk, HIGH);
    digitalWrite(ledp, HIGH);
    delay(500);
    digitalWrite(ledk, LOW);
    digitalWrite(ledp, LOW);
    delay(500);
    y++;
  }

  int z = 1;
  while (z <= 10)
  {
    digitalWrite(ledm, HIGH);
    digitalWrite(ledk, HIGH);
    digitalWrite(ledp, HIGH);
    delay(500);
    digitalWrite(ledm, LOW);
    digitalWrite(ledk, LOW);
    digitalWrite(ledp, LOW);
    delay(500);
    z++;
  }




  
}