#include <iostream>
#include "Human.h"
#include "Male.h"
#include "Female.h"
#include "SomethingElse.h"

using namespace std;

int main()
{
	Human* human = new Human();
	Human* male = new Male();
	Human* female = new Female();
	Human* something = new SomethingElse();
	human->Hello();
	male->Hello();
	female->Hello();
	something->Hello();
	return 0;
}