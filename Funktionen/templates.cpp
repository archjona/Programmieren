#include <iostream>

// function template = describes what a function looks like.
//                     Can be used to generate as many overloaded functions
//                     as needed, each using different data types

// Beispiel: cookie cutter
//           Cookies haben die gleiche Form, aber der Teig ist ein anderer

template <typename T, typename U>

// beim auto keyword checkt der compiler was der return type ist

auto max(T x, U y){ // bei templates benutzt man T als naming convention T für Thing
  return (x > y) ? x : y;
}
// double max(double x, double y){ // durch die template nicht nötig diese funktionen zu definieren
//  return (x > y) ? x : y;
// }
// char max(char x, char y){
//  return (x > y) ? x : y;
// }
int main () {

  std::cout << max(1 , 2.1) << '\n'; // wenn beide Inputs den gleichen typename haben, dann muss Datentyp gleich sein 

  return 0;
}
