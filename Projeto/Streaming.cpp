#include <iostream>
#include <string>
#include "Streaming.hpp"
#include <stdexcept>
#include <limits>
#include "SmarTV.hpp"

using std::runtime_error;
using namespace std;

ostream &operator<<(ostream &out ,const Streaming &c)
{
    for(int i=0; i < c.producoes.size(); i++){
        out << i+1 << c.producoes[i]->getNome() << endl;
    }
    return out;
}

void Streaming::run()
{   
    if (producoes.empty()) {

        cout << "OS devs ainda estão trabalhando nesse app" << endl;
        return;
    }

    int n;

    cout << endl;
    cout << "Produções disponíveis em nosso catálogo:" << endl;
    for(int i=0; i<producoes.size();i++)
    {;
        cout << i+1 << "-" << producoes[i]->getNome() << endl;
    }
    cout << endl;

    while(true){
        try {
            cout << "Digite o número da produção que deseja reproduzir: " << endl;
            cin >> n;

            if (cin.fail()) {
 
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                throw std::invalid_argument("Entrada inválida. Por favor, digite um número válido.");
            }

            if (n > 0 && n <= producoes.size()) {
                break;
            }
            throw std::invalid_argument("Número da produção inválido. Escolha um número entre 1 e " + std::to_string(producoes.size()));
            } catch (const std::invalid_argument& e) {
                cout << e.what() << endl;
        }
    }
    
    cout << producoes[n-1]->getNome() << " está sendo executado em sua TV!" << endl;
    producoes[n-1]->play();
}

void Streaming::operator<<(Produção &p){

    producoes.push_back(&p);
}

void Streaming::operator>>(string n){

    for(int i = 0; i< producoes.size(); i++){
        if(producoes[i]->getNome() == nome){
        producoes.erase(producoes.begin()+i);
      }
    }
}