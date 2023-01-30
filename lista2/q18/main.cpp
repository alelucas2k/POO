#include <iostream>
using std::cout, std::endl, std::cin;

#include <string>
using std::string;

#include "Empregado.h"

int main()
{
    string nome;
    string sobrenome;
    double salario;

    cout << "Digite o nome do empregado" << endl;
    cin >> nome;
    cout << "Digite o sobrenome do empregado" << endl;
    cin >> sobrenome;
    cout << "Digite o salario do empregado" << endl;
    cin >> salario;

    Empregado empregado1(nome, sobrenome, salario);
    empregado1.displayMessage();
    empregado1.darAumento();

    //_____________________ empregado 2 _______________________________

    string nome2;
    string sobrenome2;
    double salario2;

    cout << "Digite o nome do empregado" << endl;
    cin >> nome2;
    cout << "Digite o sobrenome do empregado" << endl;
    cin >> sobrenome2;
    cout << "Digite o salario do empregado" << endl;
    cin >> salario2;

    Empregado empregado2(nome2, sobrenome2, salario2);
    empregado2.displayMessage();
    empregado2.darAumento();


    return 0;
}