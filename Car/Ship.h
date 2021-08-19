#pragma once
#include <string>
#include "Vehicle.h"
#include "Engine.h"

class Ship : public Vehicle // Наследуемся от класса транспорт. Нужно переопределять только абстрактный метод drive и класс готов.
	// Ship is-a Vehicle
{
public:
	Ship(int _max_speed, Engine* engine, std::string _name) : Vehicle(_max_speed, engine, _name) {};
	void drive();
};

