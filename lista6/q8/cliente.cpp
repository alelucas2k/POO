#include <iostream>
#include <string>
#include "cliente.hpp"

using std::cout, std::cin, std::string, std::endl;

ostream &operator<<(ostream &out , const Cliente &c)
{
    out << "Ficha do cliente:\n" << endl;
    out << "Cliente: " << c.getnome() << endl;
    out << "CPF: " << c.getcpf() << endl;
    out << "Telefone: " << c.gettel() << endl;
    out << "Endereço: " << c.getend() << endl;

    return out;
}

Cliente::Cliente(string nome, string cpf, string telefone, string endereco):
PessoaFi(nome, cpf)
{
    settel(telefone);
    setend(endereco);
}

void Cliente::settel(string tel)
{
    telefone = tel;
}

void Cliente::setend(string end)
{
    endereco = end;
}