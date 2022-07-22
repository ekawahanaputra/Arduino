#include <Arduino.h>

// Kode ini hanyalah untuk melakukan tes arduino pada board nodemcu esp8266
const int led = 2;


void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(led, HIGH);
    Serial.println("ON");
    delay(500);

    digitalWrite(led, LOW);
    delay(500);
    Serial.println("OFF");
}