#pragma once
#include <string>
#include "Vehicle.h"
#include "Engine.h"
class Car : public Vehicle // Наследуемся от класса транспорт. Нужно переопределять только абстрактный метод drive и класс готов.
	//Car is a vehicle
{
public:
	Car(int _max_speed, Engine* _engine, std::string _name) : Vehicle(_max_speed, _engine, _name) {};
	void drive();
};

