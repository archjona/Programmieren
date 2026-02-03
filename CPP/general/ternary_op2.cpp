#include <iostream>

int main() {

    bool hungrig = true;

   // hungrig ? std::cout << "Ich hab hunger!" : std::cout << "Ich bin satt.";
    std::cout << (hungrig ? "Ich bin hungrig" : "Ich bin satt");

    return 0;
}