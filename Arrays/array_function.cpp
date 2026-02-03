#include <iostream>

double getTotal(double preis[], int size);

int main () {

   double preis[] = {12.5, 15.43, 18.94, 20.99};
   int size = sizeof(preis)/sizeof(preis[0]);
   double total = getTotal(preis, size); // wenn array in eine funktion gepassed wird, dann array ohne []


   std::cout << "€" << total;

    return 0;
}

double getTotal(double preis[], int size) { // wenn man einen array in eine funktion klatscht decayed es zu einem pointer
    double total = 0;                       // also weiß die funktion nicht mehr die größe des arrays

    for (int i = 0; i < size; i++) {
        total += preis[i];

    }
    return total;
}