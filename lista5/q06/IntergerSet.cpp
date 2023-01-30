
//
//feito por Daniel Barbosa Vasconcelos - 08/11/2022
//

#include <iostream>
#include "IntegerSet.h"
using std::cout, std::endl;

IntegerSet::IntegerSet() {
    this->array = new int[100];
    for (int i = 0; i < 100; i++){
        this->array[i] = 0;
    }
    this->size = 0;
}

IntegerSet::IntegerSet(const int * arr, int size) {
    this->size = size;
    for (int i = 0; i < size; i++){
        array[arr[i]] = 1;
    }
}

IntegerSet &IntegerSet::operator<<(int p) {
    array[p] = 1;
   
    return *this;
}

IntegerSet &IntegerSet::operator>>(int p) {
    array[p] = 0;
    return *this;
}

void IntegerSet::print() const{
    
    for (int i = 0; i < 100; i++){
        if (array[i] == 1){
            cout<< i <<" ";
        }
    }
    cout<<endl;
}

IntegerSet operator|(IntegerSet &a, IntegerSet &b) {
    IntegerSet union_sets;
    for (int i = 0; i < 100; i++){
        if (a.array[i] == 1 || b.array[i] == 1) {
            union_sets<<i;
        }
    }
    return union_sets;
}

IntegerSet operator&(IntegerSet &a, IntegerSet &b) {
    IntegerSet intersection_sets;
    for (int i = 0; i < 100; i++){
        if (a.array[i] == 1 and b.array[i] == 1){
            intersection_sets<<i;
        }
    }
    return intersection_sets;
}