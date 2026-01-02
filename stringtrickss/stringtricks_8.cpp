#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {
    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    name.erase(0, 3); // die chars in dem bereich werden gelöscht

    cout << "Neuer name: " << name;

    return 0;
}
