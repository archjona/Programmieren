#include <iostream>

// NUll value = a special value that means something has no value.
//              when a pointer is holding a null value,
//              that poiner is not pointing at anything (null pointer)

// nullptr = keyword represents a null pointer literal

// nullptrs are helpful when determining if an adress
// was successfully assigned to a pointer

// when using pointers, be careful that your code isn't
// dereferecing nullptr or pointing to free memory
// this will cause undefined behaviour

int main () {

  int *pointer = nullptr;
  int x = 123;

  pointer = &x;

  if(pointer == nullptr){
    std::cout << "address was not assigned!\n";
  }
  else {
    std::cout << "adress was assigned!\n";
    std::cout << *pointer;
  }

  return 0;
}

