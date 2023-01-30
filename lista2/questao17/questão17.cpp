#include <iostream>
using std::cout, std::endl, std::cin;

#include <string>
using std::string;

#include "ContaBanco.h"


int main()
{
    // Declarando as váriavies que serão passadas como parametros das fubções membro
    double entrada;
    double credito;
    double debito;

    cout<<"Bem-vindo a sua conta bancária! Digite o valor inicial para ser creditado em sua conta:"<<endl;

    // Bloco responsável por incializar o programa e a conta bancária com um valor inicial
    cin >> entrada;
    ContaBanco minhaConta(entrada);
    minhaConta.displayMessage();

    // Bloco responsável por fazer o deposito na conta e mostrar o saldo após o deposito
    cout << "Digite um valor para ser depositado em sua conta: " << endl;
    cin >> credito;
    minhaConta.creditar(credito);
    minhaConta.displayMessage();

    // '' por fazer o saque na conta e mostrar o saldo final
    cout << "Digite o valor que deseja sacar da sua conta: " << endl;
    cin >> debito;
    minhaConta.debitar(debito);
    minhaConta.displayMessage();

    return 0;
}