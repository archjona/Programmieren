#include <iostream>
#include <iomanip>
using std::cout; using std::cin; using std::endl;

void showbalance(double Kontostand);
double Einzahlung();
double Auszahlung();

int main () {

    double Kontostand = 0.25;
    int Auswahl = 0;
    do {
        cout << "------------------------------\n" << "1. Kontostand anzeigen\n";
        cout << "2. Einzahlung durchführen\n";
        cout << "3. Geld abbuchen\n";
        cout << "4. Abbrechen\n";
        cin >> Auswahl;

        switch (Auswahl) {
            case 1:
                showbalance(Kontostand);
                break;
            case 2:
                Kontostand += Einzahlung();
                break;
            case 3:
                Kontostand -= Auszahlung();
                break;
            case 4:
                cout << "Tschau Kakao\n";
                break;
            default:
                cout << "Bitte eine der vier Optionen auswählen (1-4)";
        }
    }while (Auswahl != 4);
    return 0;
}
void showbalance(double Kontostand) {
    cout << "Kontostand = " << std::setprecision(2) << std::fixed << Kontostand << "€\n";
}
double Einzahlung() {
    double Zahlung;
    cout << "Betrag eingeben: ";
    cin >> Zahlung;
    if (Zahlung < 0) {
        cout << "Es gibt kein negatives Geld!\n";
    }
    else {
      return Zahlung;
      }
    return 0;
  }
double Auszahlung() {
    double Abbuchung;
    cout << "Betrag eingeben: ";
    cin >> Abbuchung;
    if (Abbuchung < 0) {
        cout << "Es gibt kein negatives Geld!\n";
    }
    else {
        return Abbuchung;
    }
    return 0;
}