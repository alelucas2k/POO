#ifndef CUPOM_H
#define CUPOM_H

#include <string>
using std::string;

class Cupom
{
    public:

        Cupom(string, string, int , float);

        void setId(string), setDes(string), setQuant(int), setPreco(float);

        string getId(), getDes();

        int getQuant();

        float getPreco();

        float calculaCupom();

        void mostrarCupom();

    private:

        string id;
        string descricao;
        int quantidade;
        float preco;

};


#endif