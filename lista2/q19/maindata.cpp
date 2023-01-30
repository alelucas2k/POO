#include <iostream>
using std::cout, std::endl, std::cin;

#include <string>
using std::string;

#include "data.h"


int main()
{
	int dia, mes, ano;
	cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mês: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;
    Data data(dia, mes, ano);
    data.mostrarData();

	return 0;
} 