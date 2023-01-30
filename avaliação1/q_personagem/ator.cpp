#include <iostream>
#include "ator.h"

using std::cout, std::endl, std::string;


Personagem::Personagem(string name)
{
    nome = name;
}

Personagem::Personagem(string name, string pap, string filme)
{
    nome = name;
    setpapel(pap);
    setfilme(filme);
}

void Personagem::setfilme(string filme)
{
    nomeFilme = filme;
}

void Personagem::setpapel(string pap)
{
    papel = pap;
}

void Personagem::mostraator()
{   
    cout << "INFORMAÇÕES SOBRE O ATOR/ATRIZ:\n\n";
    cout << "Nome:\n" << getnome() << "\nPapel:\n" << getpapel() << "\nFilme: \n" << getfilme() << "\n" << endl;
}