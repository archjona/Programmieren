#include <iostream>

using namespace std;

void raw_pizza();
void raw_pizza (string topping1);
void raw_pizza(string topping1, string topping2);

int main () {

    raw_pizza(" pepperoni ", " pinguin "); // " pepperoni " wird in die topping1 string eingesetzt

    return 0;
}

void raw_pizza() {
    cout << "Leck Eier!\n";
}
void raw_pizza (string topping1) { // funktionsname + parameter = function signature
    cout << "Leck meine" << topping1 << "Eier!\n";
}
void raw_pizza(string topping1, string topping2) {
    cout << "Leck meine" << topping1 << " und " << topping2 << " Eier!\n";
}
