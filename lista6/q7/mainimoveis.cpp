#include <iostream>
#include <string>
#include "imovel.hpp"
#include "imovelnovo.hpp"
#include "imovelantigo.hpp"

using std::cout, std::cin, std::string, std::endl, std::getline;

int main()
{
    //imovel normal
    imovel casa1("rua josefa trindade", 120000);
    casa1.print();

    imovelnovo casa2("rua alguma coisa", 120000);
    casa2.print();

    imovelantigo casa3("rua n sei oq", 120000);
    casa3.print();

    return 0;
}