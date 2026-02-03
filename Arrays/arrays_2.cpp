#include <iostream>

// array = Eine Datenstruktur, die mehrere values beinhalten kann (nur values vom gleichen data type)
//         auf values wird durch eine index number zugegriffen
//         "eine variable, die mehrere werte enthält"

using namespace std;

int main() {

    string cars[3]; // zahl in den brackets gibt die größe des arrays an

    cars [0] = "Peter";
    cars [1] = "Audi";
    cars [2] = "Joe";

    cout << cars[0] << '\n'; // Das erste Element eines Arrays fängt mit 0 an
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';


    return 0;
}
