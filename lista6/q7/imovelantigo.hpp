#ifndef IMOVEL_ANTIGO
#define IMOVEL_ANTIGO

#include <iostream>
#include <string>
#include "imovel.hpp"

class imovelantigo:public imovel
{
public:
    imovelantigo(string end, double pre);
//sobrescrevendo a função
    double getPre()const{return precoDecre;}
    void setpreco(double pre);
    void print();

protected:
    double precoDecre;

};

#endif