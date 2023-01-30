#include <iostream>
#include "Retangulo.h"

using std::cout;
using std::endl;;

Retangulo::Retangulo(double altura, double largura) 
{
  setAlt(altura);
  setLarg(largura);
}

void Retangulo::setAlt(double altura1)
{
	altura = (altura1 >= 0.0 && altura1 <= 20.0) ? altura1 : 1;
}

void Retangulo::setLarg(double largura1)
{
	largura = (largura1 >= 0.0 && largura1 <= 20.0) ? largura1 : 1;
}

double Retangulo::getAlt()
{
	return altura;
}

double Retangulo::getLarg()
{
	return largura;
}

void Retangulo::printPerimetro()
{
	cout << "O perimetro do retangulo é: " << ((getAlt()*2) + (getLarg()*2)) << endl;
}

void Retangulo::printArea()
{
	cout << "A area do retangulo é: " << (getAlt() * getLarg()) << endl;
}