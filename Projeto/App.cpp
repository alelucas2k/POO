#include <iostream>
#include "App.hpp"

App::App(string n, string v):name(n), version(v)
{
    //
}

App::App():name("nenhum"), version("none")
{
    //
}

void App::setname(string nome)
{
    name = nome;
}

void App::setversion(string versao)
{
    version = versao;
}
