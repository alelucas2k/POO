#include <iostream>
#include "Retangulo.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double altura;
	double largura;

	cout << "Digite a altura: ";
	cin >> altura;

	cout << "Digite a largura: ";
	cin >> largura;

	Retangulo retangulo(altura, largura);
	retangulo.printPerimetro();
	retangulo.printArea();

	return 0;
}