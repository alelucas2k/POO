#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include "pessofisica.hpp"

using std::string;

class Funcionario:public PessoaFi
{
    friend ostream &operator<<( ostream &, const Funcionario &);
public:

    Funcionario(string nome, string cpf, string matricula, double salario, int cargahora, int horasPmes);
    double calculaSalarioBruto() const {return salario * (static_cast<double> (cargahora)/horasPmes);};

    string getMat()const{return matricula;}
    double getsalario()const{return salario;}
    int getcarga()const{return cargahora;}
    int gethoras()const{return horasPmes;}

    void setmat(string mat), setsalario(double salario), setcarga(int carga), sethoras(int horas);

private:
    string matricula;
    double salario;
    int cargahora;
    int horasPmes;
};

#endif