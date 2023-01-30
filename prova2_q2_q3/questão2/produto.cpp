#include <iostream>
#include <string>
#include "produto.hpp"

using std::cout, std::cin, std::string, std::endl;

ostream &operator<<(ostream &out , const Produto &p)
{
    out << "Informações do produto:\n" << endl;
    out << "Nome do produto: " << p.getnome() << endl;
    out << "Categoria: " << p.getcat() << endl;
    out << "Validade: " << p.getval() << endl;

    return out;
}

Produto::Produto(string nome, string categoria, string validade)
{
    setnome(nome);
    setcat(categoria);
    setval(validade);
}

void Produto::setnome(string n)
{
    nome = n;
}

void Produto::setcat(string c)
{
    categoria = c;
}

void Produto::setval(string v)
{
    validade = v;
}