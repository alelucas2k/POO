#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "array.h"

int main() {
  Array a1(2);  //array de 7 elementos
  Array a2(3);     //array de 10 elementos
  
  cin >> a1;    //lendo array 

  cin >> a2;
  
  cout << "--------------------";
  cout << "concatenando: " << endl;
  cout << (a1 + a2);
  cout << (a1 += a2);
  return 0;
}