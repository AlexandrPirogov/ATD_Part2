#pragma once
#include <string>

class Engine
{
	long id;
	std::string name;
	double power;
public:
	Engine(long _id, std::string _name, double _power): id(_id), name(_name), power(_power) {};
	inline std::string getName() { return this->name; };
};

