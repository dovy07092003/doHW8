#!/bin/bash

echo "This is the build file for AnalogIn.cpp,LED.cpp, GPIO.cpp, gpioApp.cpp"
g++ -Wall AnalogIn.cpp LED.cpp  gpioApp.cpp -o gpioAppcpp
echo "The name for the file is gpioAppcpp"
