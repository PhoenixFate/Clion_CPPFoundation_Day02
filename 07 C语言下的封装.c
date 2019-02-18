//
// Created by phoenix on 2/18/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char name[64];
    int age;
};

void PersonEat(struct Person* p)
{
    printf("name:%s 在吃饭\n",p->name);
}

void test701()
{
    struct Person p1;
    strcpy(p1.name,"三毛");
    p1.age=20;
    PersonEat(&p1);
    struct Person *p2=malloc(sizeof(struct Person));
    memset(p2,0, sizeof(struct Person));
    strcpy(p2->name,"大头儿子");
    PersonEat(p2);
}

struct Dog
{
    char name[64];
    int age;
};

void DogEat(struct Dog *dog)
{
    printf("dog:%s 在吃狗粮\n",dog->name);
}

void test702()
{
    struct Dog dog;
    strcpy(dog.name,"旺财");
    dog.age=2;
    DogEat(&dog);
    struct Person person;
    strcpy(person.name,"老王");
    DogEat(&person);
}

int main7()
{
    test701();
    test702();
    printf("----------------07-------------------\n");
    return 0;
}



