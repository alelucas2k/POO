#ifndef DATA_H
#define DATA_H

#include <string>
using std::string;

class Data
{
    public:

    Data(int = 0, int = 0, int = 0);

    void setDia(int),setMes(int), setAno(int);

    int getDia(), getMes(), getAno();

    void mostrarData();


    private:
    
        int dia;
        int mes;
        int ano;

};


#endif