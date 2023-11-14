// File name: myGpio.cpp
// This is the implement file from myGpio.h
//
#include "myGpio.h"

// Private
int MYGPIO::write(string path, string filename, string value)
{

}

int MYGPIO::write(string path, string filename, int value)
{       

}

string MYGPIO::read(string path, string filename)
{       

}

// Public
MYGPIO::MYGPIO(int number)
{       
 number = number;
}

int MYGPIO::getNumber()
{       
 cout <<"The pin number is "<<number<<endl;
}

void MYGPIO::setDirection(GPIO_DIRECTION dir)
{       

}

GPIO_DIRECTION MYGPIO:: getDirection()
{

}
int MYGPIO::setValue(GPIO_VALUE val)
{       
 dir_val =val;
}

GPIO_VALUE MYGPIO:: getValue()
{
  return dir_val;
}
void MYGPIO::toggleOutput()
{       

}

MYGPIO::~MYGPIO()
{       

}

