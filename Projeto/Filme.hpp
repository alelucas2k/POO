#ifndef FILME_H
#define FILME_H

#include <iostream>
#include <string>

using namespace std;

#include "Producao.hpp"

class Filme: public Produção
{
public:
    Filme(const string& nome, int duracao):Produção(nome){setd(duracao);}
    void setd(int d){duracao = d;}
    int getd()const{return duracao;}

    virtual void play(){
        cout << endl;
        cout << "Filme: " << getNome() << endl;
        cout << "Duração: " << getd()  << " minutos."<< endl;
        cout << endl;
        cout << "Atores: " << endl;
        for(int i=0; i<atores_.size(); i++){
            cout << atores_[i].getname() << endl;
            cout  << "Tempo de carreira: " << atores_[i].getct() << endl;
        }
        cout << endl;
        cout << "Diretores: " << endl;
        for(int i=0; i<diretores_.size(); i++){
            cout << diretores_[i].getname() << endl;
            cout << "Produções dirigidas: " << diretores_[i].getnum() << endl;
        }
    }
private:
    int duracao;
};

#endif