#include "Cat.h"
#include <cstring>

Cat::Cat(const char* _name)
    : Cat::Cat(_name, -1, false)
{
}

Cat::Cat(const char* _name, int _age)
    : Cat::Cat(_name, _age, false)
{
}

Cat::Cat(const char* _name, int _age, bool _sex)
    : age(_age)
    , sex(_sex)
{
    if(_name == nullptr) return;

    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
}

Cat::Cat(const Cat& cat)
    : Cat::Cat(cat.name, cat.age, cat.sex)
{
}

Cat::Cat(Cat&& cat)
    : name(cat.name)
    , age(cat.age)
    , sex(cat.sex)
{
    cat.name = nullptr;
}

Cat::~Cat() { 
    delete[] name;
}

Cat& Cat::operator=(const Cat& cat)
{
    if(cat.name == nullptr) return *this;
    
    delete[] name;
    name = new char[strlen(cat.name) + 1];
    strcpy(name, cat.name);
    age = cat.age;
    sex = cat.sex;
    return *this;
}

Cat& Cat::operator=(Cat&& cat)
{
    delete[] name;
    name = cat.name;
    cat.name = nullptr;
    age = cat.age;
    sex = cat.sex;
    return *this;
}

bool Cat::set_name(const char* _name)
{
    if (_name == nullptr) {
        return false;
    }

    delete[] name;
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);

    return true;
}

const char* Cat::get_name()
{
    return name;
}

void Cat::print_info()
{
    cout << "고양이 이름 : " << name << "\n";
    cout << "고양이 나이 : " << age << "\n";
    cout << "고양이 성별 : " << (sex ? "여":"남") << "\n";
    cout << "***************" << "\n";
}