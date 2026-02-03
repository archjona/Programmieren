#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {
    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    cout << name.find(' ');; // gibt an an welcher stelle sich ein gewisser character (hier whitespace) zu finden ist

    return 0;
}
