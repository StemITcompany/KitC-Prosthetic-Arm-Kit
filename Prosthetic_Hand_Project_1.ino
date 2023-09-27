#include<Servo.h>
Servo servo;

void setup() {
  // put your setup code here, to run once:
servo.attach(6);

}

void loop() {
  // put your main code here, to run repeatedly:
servo.write(110);
delay(2000);
servo.write(30);
delay(2000);
}
