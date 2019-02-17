//
// Created by phoenix on 2/17/2019.
//
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student()
    {
        cout<<"student()"<<endl;
    }
    ~Student()
    {
        cout<<"~student()"<<endl;
    }
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        this->name = name;
    }

    int getId() const {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

private:
    string name;
    int id;
};

void test201()
{
    Student student;//通过类来创建对象
    student.setName("\b中文名");
    student.setId(118);
    cout<<"name:"<<student.getName()<<endl;
    cout<<"id:"<<student.getId()<<endl;

}

int main2()
{
    test201();
    cout<<"----------------------------02----------------------------"<<endl;
    return 0;
}

