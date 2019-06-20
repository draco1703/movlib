#include "Arduino.h"

/*
	moblib - Library for interfacing with the DC motors.
	Created by David M. Nielsen, June 17th, 2019 under the MIT license.
*/

#ifndef mov_h
#define mov_h

class Mov
{
	public:
		Mov(char in1, char in2, char enA, char in3, char in4, char enB);
		void advance(unsigned char speed);
		void turnLeft(unsigned char speed);
		void turnRight(unsigned char speed);
		void stop();
	private:
		/* Figure out the correct pins */
		void setSpeed(unsigned char speed);
		char _enA;
		char _enB;
		char _in1;
		char _in2;
		char _in3;
		char _in4;
};

#endif
