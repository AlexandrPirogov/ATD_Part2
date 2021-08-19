#pragma once
#include <string>
#include "Engine.h"

class Vehicle
{
public:
	int max_speed;
	Engine* engine = nullptr; //Композиция. Vehicle has an engine.
	std::string name;
	bool isWorking;
	Vehicle();
	Vehicle(int _max_speed, Engine* _engine, std::string _name);
	void turn(bool turnOn);
	virtual void drive() = 0;
	~Vehicle() { delete engine; }
};

