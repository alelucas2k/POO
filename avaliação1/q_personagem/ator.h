#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <string>
using std::string;

class Personagem
{
	public:
		Personagem(string);

		Personagem(string, string, string);

		string getnome(){return nome;}

		string getpapel(){return papel;}

		string getfilme(){return nomeFilme;}

		void setfilme(string);

		void setpapel(string);

		void mostraator();

	private:
		string nome;
		string papel;
		string nomeFilme;
	
};

#endif