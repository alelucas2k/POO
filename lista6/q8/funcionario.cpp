#include <iostream>
#include <string>
#include "funcionario.hpp"

using std::cout, std::cin, std::string, std::endl;

ostream &operator<<(ostream &out , const Funcionario &f)
{
    out << "Ficha do funcionario:\n" << endl;
    out << "Nome:" << f.getnome() << endl;
    out << "CPF: " << f.getcpf() << endl;
    out << "Matricula: " << f.getMat() << endl;
    out << "Salario: R$ " << f.getsalario() << endl;
    /* out << "Salario bruto: R$ " << f.calculaSalarioBruto() << endl; */ 
    out << "Carga horaria: " << f.getcarga() << " horas." << endl;
    out << "Horas trabalahadas: " << f.gethoras() << " horas." << endl;

  return out;
}

Funcionario::Funcionario(string name, string cpf, string matricula, double salario, int cargahora, int horasmes):
PessoaFi(name, cpf)
{
    setmat(matricula);
    setsalario(salario);
    setcarga(cargahora);
    sethoras(horasmes);
}

void Funcionario::setmat(string mat)
{
    matricula = mat;
}

void Funcionario::setsalario(double salar)
{
    salario = salar;
}

void Funcionario::setcarga(int carga)
{
    cargahora = carga;
}

void Funcionario::sethoras(int horas)
{
    if(horas<0){
        horasPmes = 0;
    }
    else if (horas>cargahora){
        horasPmes = cargahora;
    }else{
        horasPmes = horas;
    }
}