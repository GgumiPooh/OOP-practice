#pragma once

#include <iostream>

using namespace std;

class Cat {
public:
    Cat(const char* name);
    Cat(const char* name, int age);
    Cat(const char* name, int age, bool sex);
    Cat(const Cat& cat);
    Cat(Cat&& cat);
    ~Cat();

    Cat& operator=(const Cat& cat);
    Cat& operator=(Cat&& cat);

    bool set_name(const char* name);
    const char* get_name();
    void print_info();
private:
    const char* name;
    int age;
    bool sex;
};
