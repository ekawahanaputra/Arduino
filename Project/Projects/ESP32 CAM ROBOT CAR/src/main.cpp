#include <Arduino.h>

const int flash = 4;
const int sinyalMasuk = 12;

void setup() {
  pinMode(flash, OUTPUT);
  pinMode(sinyalMasuk, INPUT);
}

void loop() {
  int statusSinyal = digitalRead(sinyalMasuk);
  if(statusSinyal == 1){
    digitalWrite(flash, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(flash, LOW);
    delay(1000);
  }
}