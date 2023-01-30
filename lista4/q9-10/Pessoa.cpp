#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.h"

Pessoa::Pessoa(string n, int i, float a)
{
    setnome(n);
    setidade(i);
    setaltura(a);

}

void Pessoa::setnome(string n)
{
    nome = n;
}

void Pessoa::setidade(int i)
{
    idade = i;
}

void Pessoa::setaltura(float a)
{
    altura = a;
}
