#include <iostream>
#include "IntergerSet.h"
using std::cout, std::endl;
int main() {

    IntergerSet interger1;
    interger1.insertElement(4).insertElement(2).insertElement(50);
    interger1.deleteElement(5);

    IntergerSet interger2;
    interger2.insertElement(4).insertElement(2).insertElement(45).insertElement(14);

    cout<<endl;

    cout<<"IntergerSet 1: ";
    interger1.print();
    cout<<endl;
    cout<<"IntergerSet 2: ";
    interger2.print();
    cout<<endl;

    IntergerSet un = unionOfSets(interger1, interger2);
    cout<<"Union: ";
    un.print();

    cout<<endl;

    IntergerSet in = intersectionOfSets(interger1, interger2);
    cout<<"Intersection: ";
    in.print();

    return 0;
}
