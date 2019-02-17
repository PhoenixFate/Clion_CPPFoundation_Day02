//
// Created by phoenix on 2/18/2019.
//

#include <iostream>
using namespace std;

void func()
{
    cout<<"fun()"<<endl;
}

void func(int a)
{
    cout<<"fun(int a)"<<endl;
}

void func(double d)
{
    cout<<"func(double d)"<<endl;
}

void test501()
{
    func();
    func(1);
    func(1.0);
}

void fun3(int &a)
{

}

void fun3(const int &a)
{
    cout<<"const int &a"<<endl;
}

void test503()
{
    fun3(10);
}
int main5()
{
    test501();
    test503();
    return 0;
}