#ifndef CARRO_H
#define CARRO_H
#include <string>
using std::string;

class Carro
{
	public:

		Carro(string, int);

		void setCarro(string, int);

		string getMarca(){return marca;}

		int getAno(){return ano;}

		void setPropietario(string);

		string getPropietario(){return propietario;}

		void infoCar();

	private:

		string marca;
		int ano;
		string propietario;
		
};

#endif