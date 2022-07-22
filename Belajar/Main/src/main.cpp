#include <Arduino.h>
#include <Servo.h>

Servo motor_servo;
int sudut = 0;

void setup(){
  motor_servo.attach(5);
}

void loop(){
  motor_servo.write(90);
  delay(10000);
  motor_servo.write(45);
  delay(5000);
  motor_servo.write(135);
  delay(5000);
}
