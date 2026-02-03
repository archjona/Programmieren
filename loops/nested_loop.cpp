#include <iostream>
// nested loop: loop in einem loop


using namespace std;

int main ()
{
    int reihen;
    int spalten;
    char symbol;

    cout << "Anzahl Reihen: ";
    cin >> reihen;

    cout << "Anzahl Spalten: ";
    cin >> spalten;

    cout << "Welches Symbol? ";
    cin >> symbol;

    for (int y=1; y <= reihen; y++) {
        for (int x = 1; x <= spalten; x++)
        {
            cout << symbol << " ";
        }
        cout << '\n';
    }
    return 0;
}