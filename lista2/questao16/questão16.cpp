#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

//definição da Classe Carro
class Carro
{

public:

  // construtores:

    Carro(string nome, int val)
  {
    marca = nome;
    ano = val;
  }

  Carro()
  {
    marca = "";
    ano = 0;
  }
  
  // atributos:

  void setAtributos(const string &nome, const int &val)
  {
    marca = nome;
    ano = val;
  }

  string getMarca()
  {
    return marca;
  }

  int getAno()
  {
    return ano;
  }

  void displayMessage()
  {
    std::cout << "Olá, eu sou um carro da marca " << getMarca() << ", ano " << getAno() << endl;
  }

private:
  string marca;
  int ano;
};

int main() {
  Carro meuCarro;

  //modificando atributo marca por meio de método set
  meuCarro.setAtributos("Renault", 2015);
  meuCarro.displayMessage();

  Carro outroCarro;

  return 0;
}