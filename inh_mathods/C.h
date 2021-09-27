#pragma once
#include "A.h"

class C : private A{
private:
   void toStringPublic();
public:
   C();
};

C::C(){cout << "C constuctor\n";};

void C::toStringPublic(){cout << "C.toStringPublic()\n";};
