#ifndef PESSOAJU_H
#define PESSOAJU_H

#include <iostream>
#include <string>
#include "pessoa.hpp"

using std::string;

class PessoaJu:public Pessoa
{
public:
    PessoaJu(string nome, string cnpj, string raz, string nf);
    
    string getcnpj()const{return cnpj;}
    string getraz()const{return razsoc;}
    string getnomf()const{return nomefan;}

    void setcnpj(string cnpj);
    void setraz(string raz);
    void setnf(string nomefam);

    void print();
private:
    string cnpj;
    string razsoc;
    string nomefan;
};

#endif