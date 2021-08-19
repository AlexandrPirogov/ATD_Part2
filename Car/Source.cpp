#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Ship.h"

using namespace std;
/*
* В данном случае полиморфизм используется в методе drive. 
* Хоть и ship и car имеют один и тот же метод, но технически метод drive должен выполнять свою функцию
* в соответствие с классом, к которому он принадлежит
*/
int main()
{
	std::string name = "Car";
	Engine* my_eng = new Engine(5, "Engv2.2", 5.5);
	Vehicle* car = new Car(5, my_eng, name);

	car->turn(true);
	car->drive();

	std::string ship_eng_name = "ship_engine";	
	Engine* ship_engine = new Engine(7, ship_eng_name, 6.6);
	Vehicle* ship = new Ship{ 50, ship_engine, "Pobeda" };
	ship->turn(true);
	ship->drive(); 
	return 0;
}