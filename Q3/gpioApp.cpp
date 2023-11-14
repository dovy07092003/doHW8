// File name: gpioApp.cpp
// This app controls the gpio pins
// Turn on LED 1 and 3
// Flash LED 2
// Read tem sensor and print out value
// Read the push button on P8.16
// If the button is push, turn on the LED on P9.12

#include "LED.h"
#include "GPIO.h"
#include "AnalogIn.h"

using namespace std;

int main(int argc, char *argv)
{
	LED leds[3] = { LED(0), LED(1), LED(2) };
	leds[0].turnOn();
	leds[2].turnOn();
	leds[1].flash("50");
	AnalogIn temp_ss(60);// GPIO for temperature sensor
	AnalogIn push_button(46);// GPIO to read the push button value
	int temp = temp_ss.readAdcSample();
	cout<<"The temperature measuring from the sensor is "<<temp<<endl;
	int button_sta = push_button.readAdcSample();
	cout<<"The status of the button is "<<button_sta<<endl;
	LED LED(60);
	if(button_sta == 0)
	{
		LED.turnOn();	
	}
	
	return 0;

}

