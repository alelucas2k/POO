//impede que múltiplas inclusões ocorram
#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
public:

    Pessoa(string, int , float);

    void setnome(string), setidade(int), setaltura(float);

    string getnome() const{return nome;}
    int getidade() const{return idade;}
    float getaltura() const{return altura;}

    void mostraPessoa() const{
        cout << "Nome: " << getnome() << endl;
        cout << "Idade: " << getidade() << endl;
        cout << "Altura: " << getaltura() << endl;
    }

private:
    string nome; 
    int idade;
    float altura;
};

#endif