#include <iostream>
#include <string>
#include "pessoajuridica.hpp"

using std::cout, std::cin, std::string, std::endl;

PessoaJu::PessoaJu(string nome, string cnpj, string raz, string nf):
Pessoa(nome)
{
    setcnpj(cnpj);
    setraz(raz);
    setnf(nf);
}

void PessoaJu::setcnpj(string cnpjaux)
{
    cnpj = cnpjaux;
}

void PessoaJu::setraz(string raz)
{
    razsoc = raz;
}

void PessoaJu::setnf(string nf)
{
    nomefan = nf;
}

void PessoaJu::print()
{
    cout << "Meu nome é: " << getnome() << endl;
    cout << "Meu cnpj é: " << getcnpj() << endl;
    cout << "minha razão social é: " << getraz() << endl;
    cout << "Meu nome fantasia é: " << getnomf() << endl;
}