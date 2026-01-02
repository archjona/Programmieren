#include <iostream>

// sizeof() = gibt die größe in bytes an von a:
//              variablen, data types, class, objects, etc.


using namespace std;

int main () {


    string name = "Jona"; // string ist ein reference data type, deshalb immer 32 bytes weik die Adresse so groß ist
    double note = 2.5; // 8
    char Option = 'a'; // 1
    bool Student = true; // 1
    char Killer[] = {'T', 'P', 'M'}; // 3 chars, also 3 bytes
    string schüler[] = {"Peter", "Jona", "Matthias", "Thomas"};

    cout << sizeof(schüler)/sizeof(string) << " Elemente" << endl; // name der variable oder der typ geht auch
    // Durch die Berechnung kann man die Größe des Arrays berechnen, wenn die Datentypen gleich sind

    return 0;
}