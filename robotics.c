#include <HCSR04.h>
#include <Servo.h>
#define triggerPin 11
#define echoPin 10
Servo leftwheel;
Servo rightwheel;

void setup() {
  Serial.begin(9600);
  HCSR04.begin(triggerPin, echoPin);
  leftwheel.attach(13);
  rightwheel.attach(12);
}

void loop() {
  double* distances = HCSR04.measureDistanceCm();
  Serial.print("Distance: ");
  Serial.print(distances[0]);
  Serial.println(" cm");
  delay(250);

  if (distances[0] > 25) {
    leftwheel.write(180);
    rightwheel.write(0);
  } else {
    leftwheel.write(45);
    rightwheel.write(135);
    delay(250);
    leftwheel.write(180);
    rightwheel.write(90);
  }
}