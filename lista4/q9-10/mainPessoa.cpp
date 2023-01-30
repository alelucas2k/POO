#include <iostream>
#include <string>
#include "Pessoa.h"

using std::endl;
using std::cin;

int main()
{
    string name;
    int idade;
    float altura;

    cout << "Digite o nome:\n";
    std::getline(cin, name);

    cout << "Digite a idade:\n";
    cin >> idade;

    cout << "Digite a altura:\n";
    cin >> altura;
    
    Pessoa p(name, idade, altura);
    p.mostraPessoa();

    return 0;

}