#include <iostream>
#include "animal.hpp"
#include "cachorro.hpp"
#include "gato.hpp"

int main()
{
    animal nenhum;
    cachorro dog2("scooby");
    dog2.caminha();
    dog2.latir();

    animal nenhum2;
    gato cat1("mimi");
    cat1.caminha();
    cat1.miar();


    return 0;
}