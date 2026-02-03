#include <iostream>

void printInfo(const std::string &name, const int &age);
//const parameter = parameter der effektiv read-only ist
// code ist sicherer, zeigt intention an, nützlich für references und pointer
int main () {

  std::string name = "Jona";
  int age = 20;

  printInfo(name, age);

  return 0;
}
void printInfo(const std::string &name, const int &age) {
    // name = " "; // wenn da, dann error weil read-only
    // age = 0; // wenn da, dann error: assignment of read-only parameter
  std::cout << name << '\n';
  std::cout << age << '\n';

} 
