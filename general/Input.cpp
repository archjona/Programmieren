#include <iostream>

// cout << insertion operator
// cin >> extraction operator
using std::cout; using std::string; using std::cin;

int main () {
    int age;
    string name;

    cout << "Wie alt bist du?" << '\n';

    cin >> age;

    cout<< "Was ist dein voller Name? ";
    std::getline(cin >> std::ws,name); // std::getLine wenn man einen string mit Leerzeichen aufnehmen will
                                        // std::ws ist um white spaces, bzw. newline characters vorm input zu löschen

    cout << "Hallo " << name << '\n';
    cout << "Du bist " << age << " Jahre alt.";
    return 0;
}