#include <iostream>
// Variante 2 des gezielten Outputs
 // Namespace = lösung für das problem, wenn man konflikte mit namen hat in großen projekten
 // jede entity brauche einen eigenen namen und solange die namespaces unterschiedliche sind, sind gleiche namen der
 // entities erlaubt

namespace erster {
    int x = 1;
}
namespace zweiter {
    int x = 2;
}

int main() {
    using namespace zweiter;
    std::cout << x;
    return 0;
}