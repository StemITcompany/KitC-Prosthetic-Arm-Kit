#include <Servo.h>
Servo servo;

int sensorPin = 2;
int count = 0;

void setup() {
  servo.attach(6);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorReading = digitalRead(sensorPin);

  if (sensorReading == HIGH) {
    count = count + 1;
  }

  if (count == 0) {
    servo.write(30);
  }
  if (count == 1) {
    servo.write(110);
  }
  if (count > 1) {
    count = 0;
  }

  delay(1000);
}
