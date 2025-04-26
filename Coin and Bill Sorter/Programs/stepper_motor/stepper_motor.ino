#include <Stepper.h>

int stepsPerRevolution = 2048;
int motSpeed = 10;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  myStepper.step(stepsPerRevolution);
;
}
