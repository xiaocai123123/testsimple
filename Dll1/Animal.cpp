#include "pch.h"
#include"Animal.h"
#include <iostream>
using namespace std;

//1������������
class Cat :public IAnimal
{
public:
    Cat(int age)
    {
        this->age = age;
    }
    virtual ~Cat()
    {
        cout << "Cat destroy!" << endl << endl;
    }
    virtual void eat()
    {
        cout << "Cat eat fish!" << endl << endl;
    }
    virtual void sleep()
    {
        cout << "Cat sleep!" << endl << endl;
    }
    virtual void releaseObj()
    {
        delete this;
    }
private:
    int age;
};

//2������һ����������
extern "C" _declspec(dllexport) IAnimal * GetCat()
{
    return new Cat(6);

}