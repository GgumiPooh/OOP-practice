#pragma once

#include <iostream>

using namespace std;

class Cat {
public:
    Cat(const char* _name);
    Cat(const char* _name, int _age);
    Cat(const char* _name, int _age, bool _sex);
    Cat(const Cat& cat);
    Cat(Cat&& cat);
    ~Cat();

    Cat& operator=(const Cat& cat);
    Cat& operator=(Cat&& cat);

    bool set_name(const char* name);
    const char* get_name();
    void print_info();
private:
    char* name;
    int age;
    bool sex;
};
