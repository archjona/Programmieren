#include <iostream>

// foreach loop = loop that eases the traversal over an iterable data set (z.b array)

int main () {


    std::string studenten[] = {"Peter", "Jona", "John", "Johnny"};

    for (std::string student: studenten) { // das vor dem doppelpunkt ist ein element (egal wie das heißt)
        std::cout << student << std::endl;
    }

    
  return 0;
}
