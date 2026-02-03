#include <iostream>
// Man kann sich mit namespaces das schreiben verkürzen
 // Namespace = lösung für das problem, wenn man konflikte mit namen hat in großen projekten
 // jede entity brauche einen eigenen namen und solange die namespaces unterschiedliche sind, sind gleiche namen der
 // entities erlaubt

int main () { // man benutzt im folgenden nicht nur std sondern std bezogen auf etwas damit keine konflikte enstehen
 using std::cout;;
 using std::string;
 using gleit = double;
 string Phoebe = "beste";
 cout << "Phoebe ist die " << Phoebe << '\n';
 gleit x = 10;
 cout << x << '\n';
  return 0;
}