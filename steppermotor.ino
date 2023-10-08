#include "steppermotordriver.h"



StepperMotor sm(9, 11, 10, 12, 2048, 40);

void setup() {
    sm.enable();
}

void loop() {
    sm.rotate(360);
    delay(5000);
}