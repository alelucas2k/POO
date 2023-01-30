#ifndef SMTV_H
#define SMTV_H

#include <string>
#include <vector>
#include "App.hpp"

using std::vector;
using namespace std;

class Smartv{

    friend void operator<<(Smartv& tv, App& app) {
        tv.instalarApploja(app);
    }

    friend void operator>>(Smartv& tv, std::string nome_app) {
        tv.desinstalApp(nome_app);
    }

public:

    Smartv(string m, string md, string s);

    void ligar();

    void desligar();

    void instalarApploja(App &a);
    
    void instalarApp(string nome_app);
    
    void desinstalApp(string a);

    void run(string);

    void listarApps();

    void menuinicio();

    string getmarca()const{return marca;}
    string getmodelo()const{ return modelo;}
    string getsisop()const{return sisop;}

private:

    string marca;
    string modelo;
    string sisop;
    vector<App*> aplicativos;
    vector<App*> loja;
    bool ligada;
};

#endif