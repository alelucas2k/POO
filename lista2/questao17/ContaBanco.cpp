#include <iostream>
using std::cout, std::endl, std::cin;

#include "ContaBanco.h"

ContaBanco::ContaBanco(double &entrada)
{   
    // contrutor da classe que inicializa recebendo uma valor qualquer maior que zero
    if(entrada >= 0)
    {
        saldo = entrada;

    }else{

        saldo = 0;

    }
}

void ContaBanco::creditar(double &credito)
{   
    // função que recebe um double e soma ao saldo inicial da conta
    double aux = credito;
    saldo += aux;

}

void ContaBanco::debitar(double &debito)
{
    // função que recebe um double e subtrai do saldo total da conta
    while(debito > saldo)
    {
        //loop que verifica se o valor a ser debitado é menor que o saldo em conta
        cout << "Voce não possui saldo suficiente para esta operação! Tente novamente:" << endl;
        displayMessage();
        cin >> debito;
    }

    saldo -= debito;
}

double ContaBanco::getSaldo()
{
    // função que retorna o saldo da conta
    return saldo;
}


void ContaBanco::displayMessage()
{
    // função que devolve printa o valor do saldo total
    std::cout<<"Seu saldo atual é de R$ " << getSaldo() << endl;
}

