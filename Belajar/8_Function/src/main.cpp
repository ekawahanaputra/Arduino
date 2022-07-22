#include <Arduino.h>

const int ledM = 5;
const int ledK = 4;
const int ledP = 0;

void setup() {
  pinMode(ledM, OUTPUT);
  pinMode(ledK, OUTPUT);
  pinMode(ledP, OUTPUT);
}


//FUNCTION ==================================================
void kedip(int led, int batasBawah, int batasAtas){
  for (int a = batasBawah; a <= batasAtas; a = a + 100){
    digitalWrite(led, HIGH);
    delay(a);
    digitalWrite(led, LOW);
    delay(a);
  }  
}
//===========================================================



void loop() {
  kedip(ledM,10,1000);
  kedip(ledK,500, 2000);
  kedip(ledP,200, 800);
  
}
