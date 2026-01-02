#include <iostream>

using namespace std;

string addition(string vorname, string nachname);

int main () {

    string vorname = "Jona-Elia";
    string nachname = "Cadenbach";
    string vollname = addition(vorname, nachname);
    cout << vollname;
    return 0;
}

string addition(string vorname, string nachname) {
    return vorname + " " + nachname;
}











