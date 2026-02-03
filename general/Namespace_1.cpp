#include <iostream>
// Variante 1 des gezielten Outputs
    // Namespace = lösung für das problem, wenn man konflikte mit namen hat in großen projekten
    // jede entity brauche einen eigenen namen und solange die namespaces unterschiedliche sind, sind gleiche namen der
    // entities erlaubt

    namespace erster {
        int x = 1;
    }
    namespace zweiter {
        int x = 2;
    }
int main () {
    int x = 0;
        std::cout << erster::x; // :: heißt scope resolution operator
    return 0;
}
