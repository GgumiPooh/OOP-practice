#include "Animal.h"
#include <cstring>

Animal::Animal(const char* _name)
    : Animal::Animal(_name, -1, false)
{
}

Animal::Animal(const char* _name, int _age)
    : Animal::Animal(_name, _age, false)
{
}

Animal::Animal(const char* _name, int _age, bool _sex)
    : age(_age)
    , sex(_sex)
{
    if (_name == nullptr)
        return;

    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
}

Animal::Animal(const Animal& animal)
    : Animal::Animal(animal.name, animal.age, animal.sex)
{
}

Animal::Animal(Animal&& animal)
    : name(animal.name)
    , age(animal.age)
    , sex(animal.sex)
{
    animal.name = nullptr;
}

Animal::~Animal()
{
    delete[] name;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (animal.name == nullptr)
        return *this;

    delete[] name;
    name = new char[strlen(animal.name) + 1];
    strcpy(name, animal.name);
    age = animal.age;
    sex = animal.sex;
    return *this;
}

Animal& Animal::operator=(Animal&& animal)
{
    delete[] name;
    name = animal.name;
    animal.name = nullptr;
    age = animal.age;
    sex = animal.sex;
    return *this;
}

bool Animal::set_name(const char* _name)
{
    if (_name == nullptr) {
        return false;
    }

    delete[] name;
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);

    return true;
}

const char* Animal::get_name()
{
    return name;
}

// void Animal::print_info()
// {
//     cout << "강아지 이름 : " << name << "\n";
//     cout << "강아지 나이 : " << age << "\n";
//     cout << "강아지 성별 : " << (sex ? "여" : "남") << "\n";
//     cout << "***************" << "\n";
// }
