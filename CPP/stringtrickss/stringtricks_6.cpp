#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {
    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    name.insert(2, "@"); // platziert das @ an der position 2 der string

    cout << name;

    return 0;
}
