// File name: myGpioApp.cpp
// This is the driver file for the file myGpio.cpp
//To run: ./buildmyGpioApp.sh
#include "myGpio.h"
#include <unistd.h>

#define PIN_PATH "/sys/class.gpio/"
int main(int argc, char *argv)
{
	MYGPIO pin9(60);// Pin P9.12 is GPIO 60
	MYGPIO pin8(46);// Pin P8.16 is GPIO 46

	pin9.setDirection(OUTPUT);
	pin8.setDirection(INPUT);
	
	pin9.setValue(HIGH);
	sleep (3);
	int pin9_val = pin9.getValue();
	cout<<"The value for pin 9 is "<<pin9_val<<endl;
	
	pin9.setValue(LOW);
	cout<<"The value for pin 9 is "<<pin9_val<<endl;

	int pin8_val = pin8.getValue();
	cout<<"The value for pin 8 is "<<pin8_val<<endl;

	
}

