#include "Cat.h"
#include <cstring>

Cat::Cat(const char* _name)
{
    // TODO: this->name에 동적할당을 하고 _name을 복사해야 합니다.
    this->name = new char[strlen(_name)+1];
    strcpy(name, _name);
    // TODO: this->age는 -1으로 초기화해야 합니다.
    this->age = -1;
    // TODO: this->sex는 false로 초기화해야 합니다.
    this->sex = false;
}

Cat::Cat(const char* _name, int _age)
{
    // TODO: this->name에 동적할당을 하고 _name을 복사해야 합니다.
    this->name = new char[strlen(_name)+1];
    strcpy(name, _name);
    // TODO: this->age에 _age로 초기화야 합니다.
    this->age = _age;
    // TODO: this->sex는 false로 초기화해야 합니다.
    this->sex = false;
}

Cat::Cat(const char* _name, int _age, bool _sex)
{
    this->name = new char[strlen(_name)+1];
    strcpy(name, _name);
    this->age = age;
    this->sex = false;
}

Cat::Cat(const Cat& cat)
{
    name = new char(*cat.name);
    
}
Cat::Cat(Cat&& cat) : name(cat.name)
{
   cat.name = nullptr;
}
Cat::~Cat(){}

Cat& Cat::operator=(const Cat& cat) {
    delete name;
    name = new char(*cat.name);
    return *this;
}
Cat& Cat::operator=(Cat&& cat) {
    delete name;
    name = cat.name;
    cat.name = nullptr;
    return *this;

    
}

bool Cat::set_name(const char* _name) {
    strcpy(name, _name);
}
const char* Cat::get_name() {
    return name;
}
void Cat::print_info() {
    cout << "고양이 이름 : " << name << "\n";
    cout << "고양이 나이 : " << age << "\n";
    cout << "고양이 성별 : " << sex << "\n";
}