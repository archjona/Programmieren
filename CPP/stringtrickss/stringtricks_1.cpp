#include <iostream>

using std::string; using std::cout; using std::cin;

int main ()

{
   string name;

    cout << "enter name: ";
    std::getline(::cin, name);

    if (name.length() > 12) { // Bedingung mit der Länge eines Strings

        cout << "name too long " << '\n';

    }
    else {

        cout << "hey " << name << '\n';
    }

    return 0;
}