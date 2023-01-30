#include <iostream>
#include "gato.hpp"
#include "animal.hpp"

using std::string, std::cout, std::endl;

gato::gato(string name):
animal(name)
{
    setraca("gato");
}

gato::gato():
animal()
{
    setraca("gato");
}

void gato::miar()
{
    cout << "miau miau!!" << endl;
}