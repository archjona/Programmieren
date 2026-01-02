#include <iostream>

using namespace std;

int main () {

   string name;

    while (name.empty()) { // while wiederholt sich so oft, bis die bedingung nicht mehr gilt


        cout << "Namen eingeben: ";
        getline(cin, name);

    }

    cout << "Hallo " << name;

    return 0;
}