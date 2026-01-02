#include <iostream>

int main () {

    std::string cars[][3] = {
        {"SQ5", "A7", "R8"}, // erste bracket sind zeilen, zweite Spalten
       {"Urus", "Huracan", "Revuelto"},    // größe spalte immer angeben, zeilen nicht unbedingt
       {"Peter", "Jens", "Matthias"}
    };

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]); // Anzahl der Spalten, iteriert also nach einer Zeile

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }


    return 0;
}