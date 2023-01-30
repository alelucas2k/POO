#ifndef GATO_H
#define GATO_H

#include <iostream>
#include <string.h>
#include "animal.hpp"

using std::string;

class gato:public animal{

public:

    gato();
    gato(string);
    void miar();

};

#endif