#include <iostream>

// break = aus der schleife springen
// continue = aktuellen durchlauf skippen

using namespace std;

int main() {

    for (int i = 0; i <= 20; i++) {
        if (i == 13) {
            cout << "STOOOOP" << '\n'; // Wird ausgeführt (13 wird nicht im output angezeigt
            break;                  // bei break hört es danach auf, bei continue geht es nach diesem output weiter
        }

    cout << i << '\n';

    }

    return 0;
}