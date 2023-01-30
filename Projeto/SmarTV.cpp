#include <iostream>
#include <string>
#include "SmarTV.hpp"
#include <stdlib.h>
#include <stdexcept>
#include <fstream>
#include "Streaming.hpp"
#include <cctype>
#include <limits>

Smartv::Smartv(string m, string md, string s): marca(m), modelo(md), sisop(s), ligada(false)
{
    //
} 

void Smartv::ligar()
{
    // Essa função muda o status de ligada e tenta carregar as informações salvas no .dat
    if(ligada){
        throw runtime_error("A SmartTV já está ligada!");
    }

    ligada = true;
    ifstream file("smarttv.dat");
    file >> marca >> modelo >> sisop;
    file.close(); 

}

void Smartv::desligar()
{
    // Essa função desliga a tv e tenta salvar os estados em um .dat
    if(!ligada){
        throw runtime_error("A SmartTV já está desligada!");
    }

    ofstream file("smarttv.dat", ios::binary);
    file << marca << " " << modelo << " " << sisop;
    ligada = false; 

    // Fecha o arquivo
    file.close(); 

    exit(0);
}

void Smartv::instalarApploja(App &a)
{   
    // função que adiciona os apps na loja para que o usuario tente instalar algum app dentre as opções passdas na main
    if(!ligada){
        throw runtime_error("A SmartTV está desligada");
    }
    loja.push_back(&a);
}


void Smartv::instalarApp(string nome_app) {
   
    // Função que intala os apps da loja para que eles possam ser usados
    for (auto it = loja.begin(); it != loja.end(); it++) {
        
        App* app = *it;
        
        if (app->getname() == nome_app) {
           
            aplicativos.push_back(app);
            loja.erase(it);
            return;
        }
    }
    
    std::cout << "Aplicativo " << nome_app << " não encontrado na loja." << std::endl;
}



void Smartv::desinstalApp(string nome_app) {

    if (!ligada) throw logic_error("SmartTV não está ligada");

    for (auto it = aplicativos.begin(); it != aplicativos.end(); it++) {
        App* app = *it;
        if (app->getname() == nome_app) {
            // Add o app ao vetor loja
            loja.push_back(app);
            // Remove o app do vetor de apps
            aplicativos.erase(it);
            return;
        }
    }
    std::cout << "Aplicativo " << nome_app << " não encontrado na TV." << std::endl;
}


void Smartv::run(string nome_app) {

    // recebe o nome do app escolhido p rodar e se o app existir roda ele
    if (!ligada) throw logic_error("SmartTV não está ligada");

    bool achou = false;
    for (auto app : aplicativos) {
        if (app->getname() == nome_app) {
            app->run();
            achou = true;
            break;
        }
    }

    // Se o nome do aplicativo não foi encontrado, lança uma exceção
    if (!achou) {
        throw invalid_argument("Não existe um aplicativo com o nome " + nome_app);
    }

}


void Smartv::listarApps(){


    // Função de apoio que lista os apps e da as opções ao usuario
    if (!ligada) throw logic_error("SmartTV não está ligada");

    if (aplicativos.empty()) {

        cout << "Não há aplicativos instalados na TV." << endl;
        cout << "Pressione S para retornar ao menu inicial: ";
        string op;
        cin >> op;
        while (op != "s" && op != "S") {
            cout << "Digite S para retornar ao menu inicial: ";
            cin >> op;
        }
        menuinicio();

    } else {
        
        while(true){

            string aux;
            string op;

            cout << endl;
            cout << "Aplicativos disponíveis:" << endl;
            for(int i=0; i<aplicativos.size();i++)
            {;
                cout << i+1 << "-" << aplicativos[i]->getname() << "/ versão: " << aplicativos[i]->getversion() << endl;
            }cout << endl;


            while(true){

                cout << "Digite o nome do aplicativo que deseja usar: " << endl;
                cin >> aux;

                try {
                    run(aux);
                } catch (const invalid_argument& e) {
                    cout << e.what() << endl;
                    cout << "Tente novamente." << endl;
                }

                cout << "Deseja executar outro aplicativo? (S/N): " << endl;
                            
                cin >> op;

                while(op!="s" && op!="S" && op!="n" && op!="N"){
                    cout << "Digite S para escolher outro app ou N para retornar ao menu inicial!" << endl;
                    cin >> op;
                }

                if(op == "s" || op == "S"){
                    listarApps();
                }
                else if(op == "n" || op == "N"){
                    menuinicio();
                }
            }  
        }
    }
}


void Smartv::menuinicio(){

    // Função que printa o menu inicial e recebe as opções escolhidas pelo usuario
    if(!ligada){
        throw runtime_error("A SmartTV está desligada");
    }   

    cout << endl;
    cout << "Bem vindo. Selecione o valor referente a ação que deseja executar: " << endl;
    cout << "--------------------------------------" << endl;
    cout << "1 - Mostrar aplicativos instalados." << endl;
    cout << "2 - Desligar sua TV." << endl;
    cout << "3 - Desinstalar apps." << endl;
    cout << "4 - Loja de apps." << endl;
    cout << "5 - Ver informações da sua TV." << endl;
    cout << "--------------------------------------" << endl;

    while(true){ 

        try {
            int opc;
            cout << "Selecione o valor referente a ação que deseja executar: " << endl;
            cin >> opc;

            // Check if the input operation failed or if the entered value is invalid
            if (cin.fail() || opc < 1 || opc > 5) {
                // Clear the error state of the stream and ignore any characters in the input buffer
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                // Throw an exception indicating that the user did not enter a valid number
                throw std::invalid_argument("Entrada inválida. Por favor, digite um número válido.");
            }
        
            if(opc==1){
                listarApps();
            }
                
            if(opc == 2){
                desligar();
                break;
            }

            if(opc==3){
                string uninstal;

                cout << endl;
                cout << "Apps que podem ser desinstalados:" << endl;

                for(int i=0; i<aplicativos.size();i++){;
                cout << i+1 << "-" << aplicativos[i]->getname() << endl;
                }
                cout << endl;
                cout << "Digite o nome do app a ser desinstalado:" << endl;

                cin >> uninstal;
                desinstalApp(uninstal);
                menuinicio();
            }

            if(opc == 4){

                if (loja.empty()) {

                    cout << "Não há aplicativos disponiveis para instalação!." << endl;
                    cout << "Pressione S para retornar ao menu inicial: ";
                    string op;
                    cin >> op;
                    while (op != "s" && op != "S") {
                        cout << "Digite S para retornar ao menu inicial: ";
                        cin >> op;
                    }
                    menuinicio();

                } else {
                
                    while(true){

                        string aux;
                        string op;

                        cout << endl;
                        cout << "Aplicativos disponíveis para instalação:" << endl;
                        for(int i=0; i<loja.size();i++){
                            cout << i+1 << "-" << loja[i]->getname() << "/ versão: " << loja[i]->getversion() << endl;
                        }cout << endl;


                        while(true){

                            cout << "Digite o nome do aplicativo que deseja instalar: " << endl;
                            cin >> aux;

                            try {
                                instalarApp(aux);
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                cout << "Tente novamente." << endl;
                            }

                            cout << "Pressione S para voltar ao menu inicial:" << endl;
                            
                            while(true){

                                string op;
                                cin >> op;
                                while(op!="s" && op!="S"){
                                    cout << "Digite S para para retornar ao menu inicial!" << endl;
                                    cin >> op;
                                }

                                if(op == "s" || op == "S"){
                                    menuinicio();
                                }
                            }

                        }
                    }
                }
            }
            
            if(opc == 5){

                cout << endl;
                cout << "--------------------------------------" << endl;
                cout << "Marca: " << getmarca() << endl;
                cout << "modelo; " << getmodelo() << endl;
                cout << "Versão de sistema: " << getsisop() << endl;
                cout << "--------------------------------------" << endl;;
                cout << endl;
                cout << "Pressione S para voltar ao menu inicial:" << endl;
                
                while(true){

                    string op;
                    cin >> op;
                    while(op!="s" && op!="S"){
                        cout << "Digite S para para retornar ao menu inicial!" << endl;
                        cin >> op;
                    }

                    if(op == "s" || op == "S"){
                        menuinicio();
                    }
                }
            }
        

        } catch (const std::invalid_argument& e) {
                cout << e.what() << endl;
            }
        }
}