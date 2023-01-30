#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using std::string;

class animal{

public:

    animal();
    animal(string name);
    void caminha();
    
    string getraca(){return raca;};
    string getnome(){return nome;};

    void setraca(string);
    void setnome(string);

protected:

    string nome;
    string raca;
};

#endif