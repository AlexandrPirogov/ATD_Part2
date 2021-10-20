# Наследование вида

Наследование вида без использования множественного наследования.
В данном случае, имеет иерархию коднитеров `Confectioner` и иерархию поваров по мясу `Confectioner`.
Можно было наследовать их от единого класса `Chef`, но семантически они разные.
Посему, создаём иерархию коднитеров и поваров по мясу, а к классу `KitchenWorker` создаём полиморфное поле `Chef`

```cpp
class Chef
{
    public:
        virtual void cook();
};

void Chef::cook()
{
    std::cout << "KitchenWorkier is cooking now\n";  
};

class Confectioner : public Chef
{
    public:
        void cook();
};

void Confectioner::cook()
{
    std::cout << "Confectioner is cooking now\n";  
};

class CakeChef : public Confectioner
{
    public:
        void cook();
};


void CakeChef::cook()
{
    std::cout << "CakeChef is cooking now\n";  
};

class SweetsChef : public Confectioner
{
    public:
        void cook();
};

void SweetsChef::cook()
{
    std::cout << "SweetsChef is cooking now\n";  
};

class MeatChef : public Chef
{
    public:
        void cook();
};

void MeatChef::cook()
{
    std::cout << "MeatChef is cooking now\n";  
};

class FishChef : public MeatChef
{
    public:
        void cook();
};


void FishChef::cook()
{
    std::cout << "FishChef is cooking now\n";  
};

class ChickenChef : public MeatChef
{
    public:
        void cook();
};

void ChickenChef::cook()
{
    std::cout << "ChickenChef is cooking now\n";  
};

class KitchenWorker
{
    public:
        KitchenWorker(Chef* chef);
        void startCooking();
    private:
        Chef* chef = nullptr;
};

KitchenWorker::KitchenWorker(Chef* chef)
{
    this->chef = chef;  
};


void KitchenWorker::startCooking()
{
    this->chef->cook();
};


```
