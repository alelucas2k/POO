#include <iostream>
#include <string>
#include "carrinho.hpp"
#include "produto.hpp"

using std::cout, std::cin, std::string, std::getline, std::endl;

int main()
{
    Carrinho ca;
    ca << Produto("requeijão", "frios", "01/01/2024") << Produto("Coca-Cola", "bebida", "01/01/2024");
    ca << Produto("cocada", "doces", "none") << Produto("Arroz", "comida", "none") << Produto("macarrão", "massas", "none");

    ca >> "requeijão";
    cout << ca;

    return 0;
}