#pragma once 
#include <iostream>

using namespace std;

class A
{
public:
   A();
   virtual void toStringPublic();
protected:
   void toStringProtected();
private:
  void toStringPrivate();
};

A::A(){cout<<"A constuctor\n";};

void A::toStringPublic()
{
   cout << "A.toStringPublic()\n";
};

void A::toStringProtected()
{
   cout << "A.toStringProtected()\n";
};

void A::toStringPrivate()
{
   cout << "A.toStringPrivate()\n";
};
