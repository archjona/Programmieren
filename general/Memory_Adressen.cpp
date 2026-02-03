#include <iostream>

// memory adress= location im speicher in der daten gespeichert sind
// eine memory adress kann mit & (adress-of operator) accessed werden

int main () {

  std::string name = "Jona"; //32 Byte
  int age = 21; // 4 Byte
  bool student = true;  // 1 byte

  std::cout << &name << '\n';
  std::cout << &age << '\n'; // abstand zwischen den adressen ist abhängig von der größe des datentyps
  std::cout << &student << '\n';
  return 0;
}
