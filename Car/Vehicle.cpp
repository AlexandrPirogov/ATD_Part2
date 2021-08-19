#include "Vehicle.h"
#include <string>

Vehicle::Vehicle() : max_speed(70),  name(""), isWorking(false)
{
	engine = nullptr;
}

Vehicle::Vehicle(int _max_speed, Engine* _engine, std::string _name) : max_speed(_max_speed), name(_name), isWorking(false)
{
	engine = _engine;
};

void Vehicle::turn(bool turnOn)
{
	this->isWorking = turnOn;
};
