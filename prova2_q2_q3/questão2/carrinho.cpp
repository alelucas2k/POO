#include <iostream>
#include <string>
#include "carrinho.hpp"

using std::cout, std::cin, std::string, std::endl;

ostream &operator<<(ostream &out , const Carrinho &c)
{
 for(int i=0; i < c.numProdutos; i++)
 {
    cout << *c.produtos[i];
 }
}


Carrinho::Carrinho()
{
    numProdutos = 0;
}

Carrinho &Carrinho::operator<<(const Produto &p){

    if(numProdutos < 30)
    {
        produtos[numProdutos++] = new Produto(p);
    }
   
    return *this;
}

Carrinho &Carrinho::operator>>(string n){
    
    for(int i=0; i < numProdutos; i++)
    {
        if(produtos[i]->getnome() == n)
        {
            for(int i=0; i < numProdutos; i++)
            {
                produtos[i] = produtos[i+1];

            }
            numProdutos--;
        }
    }

    return *this;
}