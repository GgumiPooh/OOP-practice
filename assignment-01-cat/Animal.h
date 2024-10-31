#pragma once

#include <iostream>

using namespace std;

class Animal {
public:
    Animal(const char* _name);
    Animal(const char* _name, int _age);
    Animal(const char* _name, int _age, bool _sex);
    Animal(const Animal& animal);
    Animal(Animal&& animal);
    virtual ~Animal();

    Animal& operator=(const Animal& animal);
    Animal& operator=(Animal&& animal);

    virtual bool set_name(const char* name);
    virtual const char* get_name();
    virtual void print_info() = 0;

    char* name;
    int age;
    bool sex;
};
