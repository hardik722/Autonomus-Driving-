#include<iostream>
#include<memory>
using namespace std;
class Animal
{
    public:
    virtual void speak()=0;
};
class Dog: public Animal
{
    void speak()
    {
        cout << "Woof\n";
    }
};
class Cat: public Animal
{
    void speak()
    {
        cout << "Meow\n";
    }
};

int main()
{
    shared_ptr<Animal> a1{make_shared<Dog>()};
    a1->speak();
    shared_ptr<Animal> a2{make_shared<Cat>()};
    a2->speak();
}