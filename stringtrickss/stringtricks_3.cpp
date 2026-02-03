#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {
    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    name.clear(); //output wird nach dem "hey" leer sein weil ja die string, also "name" gecleared wird

    cout << "hey " << name;

    return 0;
}