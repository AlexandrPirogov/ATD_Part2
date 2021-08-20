#include "Ship.h"
#include <iostream>
void Ship::drive() //cпециализация класса
{
	std::cout << "Ship is driving on\n";
	this->x_coord += 2;
}
