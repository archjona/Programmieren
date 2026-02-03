#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {
    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    cout << name.at(3);

    return 0;
}