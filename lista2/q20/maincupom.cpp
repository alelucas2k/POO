#include <iostream>
using std::cout, std::endl, std::cin;

#include <string>
using std::string;

#include "cupom.h"

int main()
{
    string id, des;
    int qtd;
    float preco;

    cout << "digite o id, descricao, quantidade e preco respecticamente:" << endl;
    cin >> id >> des >> qtd >> preco;

    Cupom cupom1(id, des, qtd, preco);
    cupom1.mostrarCupom();

    return 0;
}