#include <wiringPiI2C.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>

#define I2C_ADDRESS 0x28 // CAP1188 I2c address







int fileDescriptor;


int main() {
	
	if (wiringPiSetUp() == -1) {
		exit(1);
	}

	fileDescriptor = wiringPiI2CSetup(I2C_ADDRESS);


}