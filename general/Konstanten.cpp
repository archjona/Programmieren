#include <iostream>
// Veranschaulichung von Konstanten anhand der Berechnung des Flächeninhaltes eines Kreises

int main() {

    // const keyword sagt dass der wert einer variablen konstant ist
    // der compiler sorgt also dafür, dass nichts diesen wert ändert
    // (read-only)

    int x = 5;
   const double PI = 3.14159; // PI anstatt pi, weil konstanten immer mit großbuchstaben geschrieben werden)
    const double LICHT_GESCHWINDIGKEIT = 300000000;
    // PI = 420.69; (bei entfernung des // würde ein error kommen, also gut für security)
    double radius = x;
    double A = (radius * radius) * PI;

    std::cout << A << " cm²";

    return 0;
}