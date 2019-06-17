#include "Arduino.h"

/*
	usenslib - Library for interfacing with the HC-SR04 Ultrasonic Sensor.
	Created by David M. Nielsen, May 15th, 2019 under the MIT license.
*/

#ifndef mov_h
#define mov_h

class Mov
{
	public:
		Mov(char in1, char in2, char in3, char in4, char enA, char enB, unsigned int serialPort);
		void advance(bool blocked, unsigned char speed);
		void turnLeft(unsigned char speed);
		void turnRight(unsigned char speed);
	private:
		/* Figure out the correct pins */
		char _enA;
		char _enB;
		char _in1;
		char _in2;
		char _in3;
		char _in4;
};

#endif
