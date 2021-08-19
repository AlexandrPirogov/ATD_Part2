#include "Car.h"
#include <iostream>

void Car::drive()
{
	if (isWorking) {
		std::cout << "Car is driving" << std::endl;
	}
	else {
		std::cout << "Turn your car on!\n";
	}
}
