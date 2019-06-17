/*	usens - Library for interfacing with the HC-SR04 Ultrasonic Sensor.
	Created by David M. Nielsen, May 15th, 2019 under the MIT license.
*/

#include "Arduino.h"
#include "movlib.h"

Mov::Mov(char in1, char in2, char in3, char in4, char enA, char enB){
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	_in1 = in1;
	_in2 = in2;
	_in3 = in3;
	_in4 = in4;

	Serial.println("wheels ready");
}

/* needs testing */
void Mov::advance(bool blocked, unsigned char speed){
	/* should slowly stop once its blocked */
	/* move forwards until the road is blocked */
}

/* turn needs to be timed for accuracy */
/* needs testing */
void Mov::turnLeft(unsigned char speed){
	/* flip left motor direction until the car is turned 90 degrees */
}
void Mov::turnRight(unsigned char speed){
	/* flip right motor direction until the car is turned 90 degrees */
}
