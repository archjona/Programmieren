#include <iostream>

// programm zum suchen eines elementes in einem array (linear search)

int searchArray(std::string array[], int size, std::string element);

int main () {

std::string food[] = {"Banana", "Apple", "Cucumber", "Pinguin", "Peanut"};
int size = sizeof(food)/sizeof(food[0]);
int index; // index in dem fall die position innerhalb des arrays
std::string eat; // gesuchtes element

std::cout << "Enter an element to search for: " << '\n';
std::getline(std::cin, eat);

index = searchArray(food, size, eat); //der Input von eat wird also in searchArray reingeladen

if (index != -1) {
    std::cout << eat << " is at index " << index;

}
else {
    std::cout << eat << " is not in the array";
}

return 0;
}
int searchArray(std::string array[], int size, std::string element) { // man kann parameter umbennenen deswegen hier array statt nums

for (int i = 0; i < size; i++) {

    if (array[i] == element) {
        return i;
    }

}
return -1; // -1 heißt im Programmieren, dass etwas nicht gefunden wurde
}