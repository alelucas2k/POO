#include <iostream>
#include <string>
#include "pessofisica.hpp"

using std::cout, std::cin, std::string, std::endl;

PessoaFi::PessoaFi(string name, string cpf):
Pessoa(name)
{
    setcpf(cpf);
}

void PessoaFi::setcpf(string cpfaux)
{
    cpf = cpfaux;
}

void PessoaFi::print()
{
    cout << "Meu nome é: " << getnome() << endl;
    cout << "Meu cpf é: " << getcpf() << endl;
}