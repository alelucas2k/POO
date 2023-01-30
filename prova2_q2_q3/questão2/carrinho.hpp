#ifndef CARRINHO_H
#define CARRINHO_H

#include <iostream>
#include <string>
#include "produto.hpp"

using std::string, std::ostream, std::istream;

class Carrinho
{
    friend ostream &operator<<( ostream &, const Carrinho &);
public:

    Carrinho();
    Carrinho &operator<<(const Produto &);
    Carrinho &operator>>(string n);


protected:
    Produto *produtos[30];
    int numProdutos;
};

#endif