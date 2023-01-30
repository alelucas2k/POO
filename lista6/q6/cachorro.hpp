#ifndef CACHORRO_H
#define CAHORRO_H

#include <iostream>
#include <string.h>
#include "animal.hpp"

using std::string;

class cachorro:public animal{

public:

    cachorro();
    cachorro(string);
    void latir();

};

#endif