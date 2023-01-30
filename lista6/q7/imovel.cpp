#include <iostream>
#include <string>
#include "imovel.hpp"

using std::cout, std::cin, std::string, std::endl;

imovel::imovel(string end, double pre):endereco(end), preco(pre)
{
    //
}

void imovel::setend(string end)
{
    endereco = end;
}

void imovel::setpreco(double pre)
{
    preco = pre;
}

void imovel::print()
{
    cout << "Endereço:" << endl;
    cout << endereco << endl;
    cout << "Preço: " << endl;
    cout << preco << endl;
}