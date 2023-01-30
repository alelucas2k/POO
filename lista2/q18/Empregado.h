#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;

class Empregado
{
    public:

    Empregado(string n, string s, double x);
    
    void setNome(string n);

    void setSobrenome(string s);

    void setSalario(double salario);

    string getNome();

    string getSobrenome();

    double getSalario();

    void darAumento();

    void displayMessage();


    private:
        
        string nome;
        string sobrenome;
        double salario;
};


#endif