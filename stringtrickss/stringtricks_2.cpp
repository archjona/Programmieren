#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {

    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    if (name.empty()) { // Bedingung dass String leer ist

        cout << "no name entered";
    }
    else {
        cout << "hey " << name;
    }
    return 0;
}
