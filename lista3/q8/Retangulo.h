#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
	public:
		Retangulo(double = 1.0, double = 1.0);

		void setAlt(double);

		void setLarg(double);

		double getAlt();

		double getLarg();

		void printPerimetro();

		void printArea();

	private:
		double altura;
		double largura;
};

#endif