#include <Arduino.h>
#include <Servo.h>   // Ini adalah library untuk Servo Motor. #include sama artinya dengan import pada python

Servo servo;         // Ini untuk menegaskan bahwa untuk mengakses library Servo, maka akan menggunakan "servo"


void setup() {
  servo.attach(5);  // attach merupakan salah satu fungsi pada library Servo.h, (5) adalah pin yang digunakan untuk input signal
}

void loop() {
  servo.write(180);
  delay(5000);
  servo.write(0);
  delay(5000);
}