#include <Arduino.h>
#include "A4988.h"

/*#define DIR 3
#define STEP 5
#define STEPS 200

AccelStepper stepper = AccelStepper(1, STEP, DIR);

void setup() {
	stepper.setMaxSpeed(1000);
}

void loop() {
	stepper.setSpeed(400);
	stepper.runSpeed();
}
*/

#define DIR 9
#define STEP 10
#define STEPS 200
#define RPM 200
#define MICROSTEPS 4

A4988 stepper(STEPS, DIR, STEP);

void setup() {
	Serial.begin(9600);
	stepper.begin(RPM, MICROSTEPS);
}

void loop() {
	stepper.rotate(360);
	delay(1000);
}