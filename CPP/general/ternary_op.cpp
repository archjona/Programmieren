#include <iostream>

// ternary operator ?: = replacement für ein if/else statement
// condition ? expression1 : expression 2;


int main ()
{

   // int Note = 30;

   // ( Note >= 50) ?
   //     std::cout << "Sie haben bestanden! " : std::cout << "Sie sind durchgefallen... ";

    int Zahl;
    std::cout << "Bitte Zahl eingeben: ";
    std::cin >> Zahl;
    int Ergebnis = Zahl % 2;

    (Ergebnis == 0) ?
        std::cout << "Die Zahl ist gerade. " : std::cout << "Die Zahl ist ungerade";

    return 0;
}