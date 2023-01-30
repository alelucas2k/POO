#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include "cliente.hpp"
#include "pessoajuridica.hpp"
#include "funcionario.hpp"


using std::string;

class Empresa:public PessoaJu
{
public:

    Empresa(string nome, string cnpj, string raz, string nf);

    void armazenaClientes(const Cliente &);
    void imprimeClientes() const; 

    void armazenaFuncionarios(const Funcionario &);
    void imprimeFuncionarios() const; 
    double calculaFolhaPagamento();

private:
    Cliente *clientes[2];
    int numClientes;
    Funcionario *funcionarios[2];
    int numFuncionarios;
};

#endif