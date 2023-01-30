#ifndef INTERGERSET_H
#define INTERGERSET_H


class IntergerSet {
    friend IntergerSet unionOfSets(IntergerSet &, IntergerSet &); //recebe dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a união dos conjuntos
    friend IntergerSet intersectionOfSets(IntergerSet &, IntergerSet &); //recebe dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a interseção dos conjuntos
public:
    IntergerSet();
    IntergerSet(const int *, int);

    IntergerSet &insertElement(int); //insere um novo inteiro x no conjunto (seta a posição x do array para 1)
    IntergerSet &deleteElement(int); //deleta um inteiro x do conjunto (seta a posição x do array para 0)
    void print() const; 
   

private:
    int * array{};
    int size;
};

#endif