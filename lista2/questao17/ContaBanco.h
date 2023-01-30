#ifndef CONTA_H
#define CONTA_H

#include <string>
using std::string;

class ContaBanco
{
    public:

        ContaBanco(double &entrada);
        // contrutor da classe que inicializa recebendo uma valor qualquer maior que zero

        void creditar(double &credito);
        // função que recebe um double e soma ao saldo inicial da conta

        void debitar(double &debito);
        // função que recebe um double e subtrai do saldo total da conta

        double getSaldo();
        // função que retorna o saldo da conta

        void displayMessage();
         // função que devolve printa o valor do saldo total

    private:

        double saldo;
        // "variavel" encapsulada que armazena o saldo e só pode ser acessada pelas funções membro
};


#endif