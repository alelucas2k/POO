#ifndef ATOR_H
#define ATOR_H
#include <string>
#include "Pessoa_.hpp"
using std::string;

class Ator:public Pessoa{
public:
    Ator(string nome, string ct):
    Pessoa(nome){setct(ct);};
    void setct(string ct){ctime = ct;}
    string getct()const{return ctime;}
private:
    string ctime;
};
#endif