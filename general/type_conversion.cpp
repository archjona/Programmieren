#include <cmath>
#include <iostream>

// type conversion ist wenn man einen Datentypen in einen anderen überführt
//       Implicit = automatisch
//       Explicit = (int) x also neuer datentyp vor der variablen in klammern

using std::cout;
int main () {
   // char x = 100;
  //  std::cout << x << '\n'; Implizit
 //   std::cout << (char) 100; // Explizit
    int richtig = 8;
    int fragen = 10;
    double ergebnis = richtig/(double)fragen * 100;
    cout << ergebnis << "%";
    return 0;
}