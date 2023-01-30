#include <iostream>
#include <string>
#include "empresa.hpp"

using std::cout, std::cin, std::string, std::endl;

Empresa::Empresa(string nome, string cnpj, string raz, string nf):
PessoaJu(nome, cnpj, raz, nf)
{
  numClientes = 0;
  numFuncionarios = 0;
}

void Empresa::armazenaClientes(const Cliente &c)
{
  if(numClientes < 2)
  {
    clientes[numClientes++] = new Cliente(c);
  }

}

void Empresa::armazenaFuncionarios(const Funcionario &f)
{
  if(numFuncionarios<2)
  {
    funcionarios[numFuncionarios++] = new Funcionario(f);
  }
}

void Empresa::imprimeClientes() const{
  for(int i=0; i<numClientes; i++)
    {
      cout << *clientes[i] << endl;
    }
}

void Empresa::imprimeFuncionarios() const{
  for(int i=0; i<numFuncionarios; i++)
    {
      cout << *funcionarios[i] << endl;
    }
}

double Empresa::calculaFolhaPagamento()
{
  double totalFolhaPag = 0.0;
  for (int i = 0 ; i < numFuncionarios ; i++)
    totalFolhaPag += funcionarios[i]->calculaSalarioBruto();
  
  return totalFolhaPag;
}