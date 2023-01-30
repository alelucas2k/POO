#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <string>

using namespace std;

#include "Producao.hpp"

class Serie: public Produção
{
public:
    Serie(const string& nome, int numCap):Produção(nome){setd(numCap);}
    void setd(int d){numCap = d;}
    int getnumcap()const{return numCap;}

        virtual void play(){
        cout << endl;
        cout << "Serie: " << getNome() << endl;
        cout << "Temporada Única." << endl;
        cout << "Capítulos : " << getnumcap() << endl;
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
    int numCap;
};

#endif