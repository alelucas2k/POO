#include <iostream>
#include "animal.hpp"

using std::string, std::cout, std::endl;

animal::animal():nome("sem nome"), raca("animal")
{
    //
}

animal::animal(string name):nome(name), raca("animal")
{
    //
}

void animal::caminha() 
{
    cout << "Meu nome é " << getnome() << " sou um " << getraca() << " e estou caminhando" << endl;
}

void animal::setraca(string racaa)
{
    raca = racaa;
}