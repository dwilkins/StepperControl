#include "WProgram.h"
#include <Stepper.h>

extern "C" void __cxa_pure_virtual(void) {
    while(1);
}

Stepper myStepper(200,2,4,3,5);
void setup() {
myStepper.setSpeed(75);
Serial.begin(115200);
}



void loop() {

myStepper.step(400);
Serial.println("Stepped");
delay(500);
myStepper.step(-400);
delay(500);
myStepper.step(50);
delay(500);
myStepper.step(-50);
delay(500);

}

int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}

