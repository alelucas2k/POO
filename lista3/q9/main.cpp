#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main() {
    string cpf, nome;
    
    /* 1) teste para verificar a classe pessoa */
    Pessoa p1("36599028020", "Alessandro");
    p1.imprime();

    cout <<  " " << endl;
    
    Pessoa p2("1234567891", "Victoria");
    p2.imprime();

    cout <<  " " << endl;
    
    cout << "Digite o nome: ";
    getline(cin, nome);
    
    cout << "Digite o CPF: ";
    getline(cin, cpf);

    Pessoa p(cpf, nome);
    p.imprime();

    return 0;
}