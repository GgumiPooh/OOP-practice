#include "Animal.h"

class Dog : public Animal {
public:
    void print_info() override
    {
        cout << "강아지 이름 : " << name << "\n";
        cout << "강아지 나이 : " << age << "\n";
        cout << "강아지 성별 : " << sex << "\n";
    }

    Dog(const char* _name): Animal(_name) { };
    Dog(const char* _name, int _age) : Animal(_name, _age) { };
    Dog(const char* _name, int _age, bool _sex) : Animal(_name, _age, _sex) { };
    Dog(const Dog& Dog): Animal(Dog) { };
    Dog(Dog&& Dog): Animal(Dog) { };
    ~Dog() override{ };

    Dog& operator=(const Dog& Dog) { 
        Animal::operator=(Dog);
    };

    Dog& operator=(Dog&& Dog) { };

    bool set_name(const char* name) override {
        Animal::set_name(name);
    };
    const char* get_name() override {
        Animal::get_name();
    };
};