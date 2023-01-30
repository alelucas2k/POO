#ifndef PESSOAFI_H
#define PESSOAFI_H

#include <iostream>
#include <string>
#include "pessoa.hpp"
using std::string;

class PessoaFi:public Pessoa
{
public:
    PessoaFi(string nome, string cpf);
    string getcpf()const{return cpf;}
    void setcpf(string cpf);
    void print();
protected:
    string cpf;
};

#endif