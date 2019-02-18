//
// Created by phoenix on 2/18/2019.
//
#include <iostream>
#include <string>
using  namespace std;

class Person9
{
public:
    void setAge(int age)
    {
        this->age=age;
    }
    int getAge()
    {
        return this->age;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
private:
    int age;
    string name;
};


void test901()
{
    Person9 p1;
    p1.setAge(10);
    int age=p1.getAge();
    cout<<"age:"<<age<<endl;
    p1.setName("\b老王");
    cout<<"name:"<<p1.getName()<<endl;
}

int main()
{
    test901();
    cout<<"----------------------------09--------------------------"<<endl;
    return 0;
}

