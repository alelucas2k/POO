#ifndef DIRETOR_H
#define DIRETOR_H
#include <string>
#include "Pessoa_.hpp"

using std::string;

class Diretor:public Pessoa{
public:
    Diretor(string name, int num):
    Pessoa(name){setnum(num);}
    void setnum(int num){numPro=num;}
    int getnum()const{return numPro;}
private:
    int numPro;
};
#endif