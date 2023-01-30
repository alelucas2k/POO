#include <iostream>
using std::cout, std::endl, std::cin;

#include "cupom.h"

Cupom::Cupom(string idd, string des, int qtd, float preco)
{
    setId(idd);
    setDes(des);
    setQuant(qtd);
    setPreco(preco);
}

void Cupom::setId(string idd)
{
    id = idd;
}

void Cupom::setDes(string des)
{
    descricao = des;
}

void Cupom::setQuant(int qtd)
{
    quantidade = qtd;
}

void Cupom::setPreco(float pre)
{
    preco = pre;
}

string Cupom::getId()
{
    return id;
}

string Cupom::getDes()
{
    return descricao;
}

int Cupom::getQuant()
{
    return quantidade;
}

float Cupom::getPreco()
{
    return preco;
}

float Cupom::calculaCupom()
{
    float total = getQuant() * getPreco();

    if(total < 0){
        return 0;
    }else{
        return total;
    }
}

void Cupom::mostrarCupom()
{
    cout << "ID: " << getId() << endl;
    cout << "DESCRICAO: " << getDes() << endl;
    cout << "QUANTIDADE: " << getQuant() << endl;
    cout << "PRECO: " << getPreco() << endl;
    cout << "VALOR TOTAL DO CUPOM: " << calculaCupom() << endl;
}