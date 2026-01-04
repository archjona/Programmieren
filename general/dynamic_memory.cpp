#include <iostream>

// dynamic memory = Memory that is allocated after the program
//                  is already compiled & running. Use the 'new'
//                  operator to allocate memory in the heap instead of stack
//
//                  Useful when we don't know how much memory we will need.
//                  Makes our programs more flexible, especially when accepting user input


int main () {

    
    int *pNum = NULL;

    pNum = new int; // new operator returned eine adress, die wird in pNum gespeichert
                    // der pointer pNum zeigt auf eine adresse, wo ein integer gespeichert wird
    *pNum = 21;

    std::cout << "adress: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // delete damit nach dem durchlauf der pointer wieder aus dem heap gelöscht wird
                 // weil c++ hat keinen garbage collector

  return 0;
}
