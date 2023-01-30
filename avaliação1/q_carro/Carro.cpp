#include <iostream>
#include "Carro.h"

using std::cout, std::endl, std::string;

Carro::Carro(string marc, int year)
{
    setCarro(marc, year);
}

void Carro::setCarro(string marc, int year)
{
    marca = marc;
    ano = year;
}

void Carro::setPropietario(string nome)
{
    propietario = nome;
}

void Carro::infoCar()
{
    cout << "Marca do carro:\n" << getMarca() << "\nAno: \n" << getAno() << "\nPropietário: \n" << getPropietario() << endl; 
}