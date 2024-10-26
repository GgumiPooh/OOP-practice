#include <iostream>
#include "Cat.h"

#define endl '\n'

using namespace std;

int main() {
    Cat cat1("Nabi");
    cat1.print_info();

    Cat cat2("Nabi", 3);
    cat2.print_info();

    Cat cat3 = cat1;
    cat3.print_info();

    Cat cat4 = move(cat2);
    cat4.print_info();

    cat1 = cat4;
    cat1.print_info();

    cat1 = move(cat4);
    cat1.print_info();

    cat1.set_name("Ggumi");
    cat1.print_info();
    cout << cat1.get_name() << endl;

    return 0;
}