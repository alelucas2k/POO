#include <iostream>
#include "ator.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	Personagem victoria("victoria");
	victoria.mostraator();

	string name, papel, filme;

	cout << "Digite o nome do ator ou atriz:\n";
	std::getline(cin, name);

	cout << "Digite o papel interpretado:\n";
	std::getline(cin, papel);

	cout << "Digite o nome do filme:\n";
	std::getline(cin, filme);

	Personagem eu(name, papel, filme);
	eu.mostraator();

	return 0;
}