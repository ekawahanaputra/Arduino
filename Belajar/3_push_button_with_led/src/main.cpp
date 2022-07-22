#include <Arduino.h>

// Disini akan membuat sebuah led menyala dengan menggunakan inputan dari push button
const int button = 5;
const int led = 13;


void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  int status_button = digitalRead(button);
  if (status_button == 1)
  {
    Serial.println("ON");
    digitalWrite(led, HIGH);
    delay(1000);
  }

  else
  {
    Serial.println("OFF");
    digitalWrite(led, LOW);
    delay(1000);
  }
  
}
  
