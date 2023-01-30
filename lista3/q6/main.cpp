#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  
  Time s(11,50,59);
  Time x(11,59,59);
  Time t(23,59,59);

  s.printUniversal();
  x.printUniversal();
  t.printUniversal();

  return 0;
}
