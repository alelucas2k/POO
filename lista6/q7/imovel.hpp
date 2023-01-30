#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>

using std::string;

class imovel
{
public:

    imovel(string end, double pre);

    string getEnd(){return endereco;}
    double getPre(){return preco;}

    void print();
    
    void setpreco(double pre);
    void setend(string end);

protected:
    string endereco;
    double preco;
};

#endif