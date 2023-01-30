#include <iostream>
#include <string>
#include "imovelnovo.hpp"

using std::cout, std::cin, std::string, std::endl;

imovelnovo::imovelnovo(string end, double pre):
imovel(end, pre)
{
    setend(end);
    setpreco(pre);
}

void imovelnovo::setpreco(double pre)
{
    double aux = pre * 1.3;
    precoAcres = aux;
}

void imovelnovo::print()
{
    cout << "Endereço:" << endl;
    cout << endereco << endl;
    cout << "Preço: " << endl;
    cout << precoAcres << endl;
}