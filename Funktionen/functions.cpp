#include <iostream>

void happybirthday(std::string name, int age);

// function= ein block von reusable code
// funktionen können nicht sehen, was in anderen funktionen deklariert, bzw. bekannt ist

int main () {

    std::string name = "Jona";

    int age = 20;

    happybirthday(name, age); // () stehen für den call, der inhalt wird aus einer anderen funktion kopiert

    return 0;
}
void happybirthday(std::string name, int age) { // der parameter (also name) kann auch anders genannt werden, es geht um den typ

    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Danke für alles Nick\n";
    std::cout << "Du bist " << age << " Jahre alt :)";
}
