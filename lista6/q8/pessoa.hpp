#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using std::string, std::ostream;

class Pessoa
{
    friend ostream &operator<<( ostream &, const Pessoa &);
public:

    Pessoa(string nome);
    string getnome()const{return nome;}
    void setnome(string name);
    void print();

protected:
    string nome;
};

#endif