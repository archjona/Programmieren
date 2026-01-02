#include <iostream>

using std::string; using std::cout; using std::cin;


int main () {
    string name;

    cout << "enter name: ";

    std::getline(cin, name);

    name.append("@gmail.com"); // inhalt von append wird an die string hinzugefügt im output

    cout << "name is now " << name;

    return 0;
}
