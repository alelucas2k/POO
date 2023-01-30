#include <iostream>
#include "cachorro.hpp"
#include "animal.hpp"

using std::string, std::cout, std::endl;

cachorro::cachorro(string name):
animal(name)
{
    setraca("cachorro");
}

cachorro::cachorro():
animal()
{
    setraca("cachorro");
}

void cachorro::latir()
{
    cout << "auauauau!!" << endl;
}