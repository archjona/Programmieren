#include <iostream>

// pointers = variable that stores a memory address of another variable
//            sometimes it's easier to work with an adress

// & adress-of operator
// * dereference operator

int main () {

  std::string name = "Jona";
  int age = 21;
  std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  std::string *pName = &name;
  int *pAge = &age;
  std::string *pfreePizzas = freePizzas; // kein adressof-operator (&), weil Array schon Adresse ist

  std::cout << *pName << '\n'; // * sorgt für die dereference, also die Adresse wird in value umgeformt
  std::cout << *pAge << '\n';
  std::cout << pfreePizzas;

  return 0;
}



