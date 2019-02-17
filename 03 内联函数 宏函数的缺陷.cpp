//
// Created by phoenix on 2/17/2019.
//
#include <iostream>
using  namespace std;

#define add(a,b) ((a)+(b))

void test301()
{
    int res=add(10,20);
    cout<<"res:"<<res<<endl;
}

#define myCompare(a,b) ((a) < (b)) ? (a):(b)
void test302()
{
    int a=10;
    int b=20;
    int res=myCompare(++a,b);
    cout<<"res:"<<res<<endl;
};

inline void myCompare2(int a,int b);

void test303()
{

}
inline void myCompare2(int a,int b)
{

}


int main3()
{
    test301();
    test302();
    cout<<"-------------------03----------------------"<<endl;
    return 0;
}

