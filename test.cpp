#include <iostream>

int main () {

  std::string x = "Peter";

  std::string *pointer =  &x;
  // *pointer = "Hey";

  std::cout << *pointer;

  return 0;
}
