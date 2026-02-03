#include <iostream>
#include <vector>
typedef std::string text_t;
typedef int number_t;
    // typedef = reserviertes keyword um einen extra namen (alias) für einen Datentyp zu erstellen
    // code wird besser lesbar, typos werden weniger und identifier für einen existierenden type
    // im allgemeinen eher "using" verwenden als typedef, außer wenn typedef sich besser eignet
int main () {

    text_t name = "Jona";
    number_t x = 12;
    std::cout << name << '\n';
    std::cout << x << '\n';
    return 0;
}