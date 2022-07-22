#include <Arduino.h>

// Latihan ini bertujuan untuk menghidupkan banyak led dengan menggunakan satu tombol sebagai input
const int button = 5;
const int ledm = 4;
const int ledk = 0;
const int ledp = 14;
int x = 0;

void setup() {
  pinMode(button, INPUT);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledp, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int status = digitalRead(button);
  if (status == 1)
  {
    x++;
  }

  if (x == 4)
  {
    x--;
    x--;
    x--;
    x--;
  }
  
  
  switch (x)
  {
  case 1:
    digitalWrite(ledm, HIGH);
    digitalWrite(ledk, LOW);
    digitalWrite(ledp, LOW);
    Serial.println("LED MERAH ON");
    delay(100);
    break;

  case 2:
    digitalWrite(ledm, LOW);
    digitalWrite(ledk, HIGH);
    digitalWrite(ledp, LOW);
    Serial.println("LED KUNING ON");
    delay(100);
    break;

  case 3:
    digitalWrite(ledm, LOW);
    digitalWrite(ledk, LOW);
    digitalWrite(ledp, HIGH);
    Serial.println("LED PUTIH ON");
    delay(100);
    break;
  
  default:
    break;
  }

}