#ifndef IMOVElNOVO_H
#define IMOVELNOVO_H

#include <iostream>
#include <string>
#include "imovel.hpp"

class imovelnovo:public imovel
{
public:
    imovelnovo(string end, double pre);
//sobrescrevendo a função
    double getPre()const{return precoAcres;}
    void setpreco(double pre);
    void print();

protected:
    double precoAcres;
};



#endif