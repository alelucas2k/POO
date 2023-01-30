#include <iostream>
using std::cout, std::endl, std::cin;

#include <iomanip>
using std::setfill; 
using std::setw;

#include "data.h"

Data::Data(int d, int m,int a)
{
    setDia(d);
    setMes(m);
    setAno(a);
}

void Data::setDia(int d)
{
    dia = (d >=0 && d < 31) ? d : 1;
}

void Data::setMes(int m)
{
    mes = (m >=0 && m < 12) ? m : 1;
}

void Data::setAno(int a)
{
    ano = a;
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::mostrarData()
{
    cout << setfill('0') << setw(2) << getDia() << "/" << setw(2) << getMes() << "/" << getAno() << endl;
}