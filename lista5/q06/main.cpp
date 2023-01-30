#include <iostream>
#include "IntegerSet.h"
using std::cout, std::endl;
int main() {

    IntegerSet a;
    cout << "a: ";
    a<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10;
    a.print();
    IntegerSet b;
    cout<<endl<<"b: ";
    b<<1<<2<<3<<4<<50<<6<<7<<8<<90<<10;
    b.print();
    IntegerSet c;
    cout << endl<< "Union: ";
    c = a|b;
    c.print();
    IntegerSet d;
    cout <<endl << "Intersection: ";
    d = a&b;
    d.print();
    

    return 0;
}
