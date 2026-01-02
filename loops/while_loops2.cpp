#include <iostream>

using namespace std;

int main () {

    string name;

    do{


        cout << "Namen eingeben: ";
        getline(cin, name);


    }while (name.empty());

    cout << "Hallo " << name;

    return 0;
}
