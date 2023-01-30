#include <iostream>
using std::cout, std::endl, std::cin;

#include "Empregado.h"

Empregado::Empregado(string n, string s, double x)
{
    setNome(n);
    setSobrenome(s);
    setSalario(x);
}


void Empregado::setNome(string n)
{
    nome = n;
}

void Empregado::setSobrenome(string s)
{
    sobrenome = s;
}

void Empregado::setSalario(double x)
{
    if(x < 0){
        salario = 0;
    } else {
        salario = x;
    }
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

double Empregado::getSalario()
{
    return salario;
}

void Empregado::darAumento()
{
    double aumento = getSalario() * 1.1;
    setSalario(aumento);
    cout << "Novo salario de " << getNome() << " com aumento de 10%: R$ " << getSalario() << endl;
}

void Empregado::displayMessage()
{
    cout << "Nome do Empregado:" << endl;
    cout << nome << sobrenome << endl;
    cout << "Salário:\n" << "R$ " << salario << endl;
}

