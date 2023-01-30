#ifndef STREAMING_H
#define STREAMING_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "App.hpp"
#include "Producao.hpp"

class Streaming: public App
{
    friend ostream &operator<<( ostream &, const Streaming &);
public:
    Streaming(const string& nome, const string& versao):App(nome, versao){};
    
    void run();

    void buscaApp(int);

    void operator<<(Produção &p);
    void operator>>(string n);

protected:
    string nome;
    vector<Produção*> producoes;
};

#endif