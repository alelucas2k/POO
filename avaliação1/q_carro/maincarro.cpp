#include <iostream>
#include "Carro.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{	
	cout << "Digite o nome do propietário:\n";
	string nome;
	std::getline(cin, nome);

	Carro meucarro("mercedez", 2019);
	meucarro.setPropietario(nome);
	meucarro.infoCar();

	return 0;
}