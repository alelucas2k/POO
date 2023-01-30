#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using std::string;

class Pessoa{
public:

    Pessoa(string name):nome(name){};
    void setname(string name){nome = name;}
    string getname()const{return nome;}
    
private:
    string nome;
};

#endif