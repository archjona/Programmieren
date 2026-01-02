// #include ist ein header file, input und output operationen werden so erlaubt
#include <iostream>

int main() { //int main ist die hauptfunktion und das, was in den braces steht, ist teil davon
    std::cout << "Hallo Peter!" << '\n'; // \n ist ein "new-line character" alternativ: : std::endl
    std::cout << "Wie geht es dir?" << '\n'; //std::cout = standard (std) character (c) output (out) << auch output
    return 0; //0 heißt kein problem, 1 heißt problem. Am Ende jedes Statements muss ein ; sein
}