#include <iostream>
#include <time.h> 
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {

  time_t now = time(0);

  tm *ltm = localtime(&now);

  Time s(ltm -> tm_hour, ltm -> tm_min , ltm -> tm_sec);

  s.printUniversal();


  return 0;
}
