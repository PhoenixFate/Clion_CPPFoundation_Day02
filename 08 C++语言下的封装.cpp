//
// Created by phoenix on 2/18/2019.
//
#include <iostream>
#include <string.h>
using  namespace std;

struct Person
{
    char name[64];
    int age;
    void PersonEat()
    {
        cout<<"name:"<<this->name<<" 在吃饭"<<endl;
    }
};

void test801()
{
    struct Person p;
    strcpy(p.name,"\b老王");
    p.PersonEat();
}

struct Dog
{
    char name[64];
    int age;
    void DogEat()
    {
        cout<<"name:"<<this->name<<" 在吃狗粮"<<endl;
    }
};

void test802()
{
    struct Dog dog;
    strcpy(dog.name,"\b小黑");
    dog.DogEat();
}

class Animal
{
public:
private:
};

void test03()
{

}

int main8()
{
    test801();
    test802();
    cout<<"-----------------------08--------------------------"<<endl;
    return 0;
}

