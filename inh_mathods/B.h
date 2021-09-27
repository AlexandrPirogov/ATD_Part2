#pragma once
#include "A.h"

class B : protected A
 {
 public:
   B();
   void toStringPublic();
};

B::B(){cout << "B constuctor\n";};

void B::toStringPublic(){ cout << "b.toStringPublic\n";};
