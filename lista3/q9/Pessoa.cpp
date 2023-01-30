#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;


Pessoa::Pessoa(string cpf, string nome){
    setCpf(cpf);
    setNome(nome);
}

void Pessoa::setCpf(string cpf1){
    cpf = cpf1;
    unsigned long soma= 0;
    unsigned long soma2= 0;
    
    
    if(cpf.length() == 11){
        int penultimoDigito = cpf[9] - '0';
        int ultimoDigito = cpf[10] - '0';

        for (int i = 0; i <= 9; i++){
            int num = cpf[i] - '0';
             if (i < 9){
                soma += num * (10 - i);  
            } 
        }
        
        for (int i = 0; i <= 10; i++){
            int num = cpf[i] - '0';
            if (i <= 9){
                soma2 += num * (11 - i);  
            }
        }

        int resto1 = (soma*10) % 11;
        int resto2 = (soma2*10) % 11;
        

        cpfValido = (resto1 == penultimoDigito & resto2 == ultimoDigito)? true : false;
    }
    else{
        cpfValido = false;
    }
    
}

void Pessoa::setNome(string nome1){
    nome = nome1;
}

void Pessoa::imprime(){
    cout << "Nome: " << getNome() << endl;
    
    if(cpfValido){
        cout << "CPF valido" << endl;
        printcpf();
    }else{
        cout << "CPF: " << getCpf() << endl;
        cout << "CPF invalido" << endl;
    }
}

void Pessoa::printcpf(){
        cout << "CPF: " ;
        for(char i = 0; i < 11; i++)
    {
        cout << cpf[i];
        if(i == 2 || i == 5)
            cout << ".";
        if(i == 8)
            cout << "-";
    }
    cout << endl;
} 