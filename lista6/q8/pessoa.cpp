#include <iostream>
#include <string>
#include "pessoa.hpp"

using std::cout, std::cin, std::string, std::endl;

ostream &operator<<(ostream &out , const Pessoa &p)
{
    out << p.getnome();

  return out;
}

Pessoa::Pessoa(string nome):nome(nome)
{
    //
}

void Pessoa::setnome(string name)
{
    nome = name;
}

void Pessoa::print()
{
    cout << "Meu nome é: " << getnome() << endl;
}