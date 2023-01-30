#include <iostream>
#include <string>
#include "imovelantigo.hpp"

using std::cout, std::cin, std::string, std::endl;

imovelantigo::imovelantigo(string end, double pre):
imovel(end, pre)
{
    setend(end);
    setpreco(pre);
}

void imovelantigo::setpreco(double pre)
{
    double aux = pre - (pre * 0.3);
    precoDecre = aux;
}

void imovelantigo::print()
{
    cout << "Endereço:" << endl;
    cout << endereco << endl;
    cout << "Preço: " << endl;
    cout << precoDecre << endl;
}