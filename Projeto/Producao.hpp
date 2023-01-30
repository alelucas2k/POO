#ifndef PROD_H
#define PROD_H

#include <iostream>
#include <string>
#include <vector>
#include "Ator.hpp"
#include "Diretor.hpp"

using std::vector;
using namespace std;

class Produção{
public:
  Produção(const string& nome):nome_(nome){}

  virtual void play() = 0;

  const string& getNome() const { return nome_;}

  void setNome(const string& nome) { nome_ = nome;}

  void removerAtor(const string& nome)
  {
    for(int i = 0; i< atores_.size(); i++){
      if(atores_[i].getname() == nome){
        atores_.erase(atores_.begin()+i);
      }
    }
  }

  void removerDiretor(const string& nome) {
    for(int i = 0; i< diretores_.size(); i++){
      if(diretores_[i].getname() == nome){
        diretores_.erase(diretores_.begin()+i);
      }
    }
  }

  void adicionarAtor(Ator a){atores_.push_back(a);}

  void adicionarDiretor(Diretor d){diretores_.push_back(d);}

protected:
  string nome_;
  vector<Diretor> diretores_;
  vector<Ator> atores_;

};

#endif

