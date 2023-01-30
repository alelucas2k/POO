#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
#include "pessofisica.hpp"

using std::string;

class Cliente:public PessoaFi
{
    friend ostream &operator<<( ostream &, const Cliente &);
public:
    Cliente(string nome, string cpf, string telefone, string endereco);
    
    string gettel()const{return telefone;}
    string getend()const{return endereco;}

    void settel(string telefone);
    void setend(string endereco);

private:
    string telefone;
    string endereco;
};

#endif