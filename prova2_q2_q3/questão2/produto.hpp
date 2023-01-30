#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

using std::string, std::ostream;

class Produto
{
    friend ostream &operator<<( ostream &, const Produto &);
public:

    Produto(string nome, string categoria, string validade);

    void setnome(string nome);
    void setcat(string cat);
    void setval(string val);

    string getnome()const{return nome;}
    string getcat()const{return categoria;}
    string getval()const{return validade;}

protected:
    string nome;    
    string categoria;
    string validade;
};

#endif