//
// Created by nascolas on 10/27/22.
//
#include <iostream>
#include "IntergerSet.h"
using std::cout, std::endl;

IntergerSet::IntergerSet() {
    this->array = new int[100];
    for (int i = 0; i < 100; i++){
        this->array[i] = 0;
    }
    this->size = 0;
}

IntergerSet::IntergerSet(const int * arr, int size) {
    this->size = size;
    for (int i = 0; i < size; i++){
        array[arr[i]] = 1;
    }
}

IntergerSet &IntergerSet::insertElement(int p) {
    if(array[p] == 0){
        array[p] = 1;
    }else{
        cout<<"\nThis element already exist!"<<endl;
    }
    return *this;
}

IntergerSet &IntergerSet::deleteElement(int p) {
    if (array[p] == 1){
        array[p] = 0;
    }else{
        cout<<"\nThis element doesn't exist!"<<endl;
    }
    return *this;
}

void IntergerSet::print() const{
    cout<<endl;
    for (int i = 0; i < 100; i++){
        if (array[i] == 1){
            cout<< i <<" ";
        }
    }
}

IntergerSet unionOfSets(IntergerSet &s1, IntergerSet &s2){
    IntergerSet union_sets;
    for (int i = 0; i < 100; i++){
        if (s1.array[i] == 1 || s2.array[i] == 1) {
            union_sets.insertElement(i);
        }
    }
    return union_sets;
}

IntergerSet intersectionOfSets(IntergerSet &s1, IntergerSet &s2){
    IntergerSet intersection_sets;
    for (int i = 0; i < 100; i++){
        if (s1.array[i] == 1 and s2.array[i] == 1){
            intersection_sets.insertElement(i);
        }
    }
    return intersection_sets;
}