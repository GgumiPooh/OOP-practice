#include "Animal.h"

class Cat : public Animal {
public:
    void print_info() override
    {
        cout << "고양이 이름 : " << name << "\n";
        cout << "고양이 나이 : " << age << "\n";
        cout << "고양이 성별 : " << sex << "\n";
    }

    Cat(const char* _name): Animal(_name) { };
    Cat(const char* _name, int _age) : Animal(_name, _age) { };
    Cat(const char* _name, int _age, bool _sex) : Animal(_name, _age, _sex) { };
    Cat(const Cat& cat): Animal(cat) { };
    Cat(Cat&& cat): Animal(cat) { };
    ~Cat() override{ };

    Cat& operator=(const Cat& cat) { 
        Animal::operator=(cat);
    };

    Cat& operator=(Cat&& cat) { };

    bool set_name(const char* name) override {
        Animal::set_name(name);
    };
    const char* get_name() override {
        Animal::get_name();
    };
};