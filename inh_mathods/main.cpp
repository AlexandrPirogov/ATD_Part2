#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;


int main()
{
   A* a = new A();
   A* b = (A*)(new B());
   A* c = (A*)(new C());

   A* b1 = new B();
   A* c1 = new C();
   a->toStringPublic(); //public A andd public B && private A and private B
   b->toStringPublic(); //private/protected A and private/protected B but accesable even it B's methods is private
   c->toStringPublic(); //Exception//public A but private C but C's methods accesable even it is private

   //b1->toStringPublic(); //Exception
   //c1->toStringPublic();//Expeptiomn
   return 0;
}
