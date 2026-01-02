#include <iostream>

// && = AND
// || = OR
// ! = NOT


int main () {

    int temp;
    bool sunny = false;

    std::cout << "Wie warm/kalt ist es (in Grad)? ";
    std::cin >> temp;

    if (temp > 5 && temp < 18) {
        std::cout << "Das ist weder kalt, noch warm. ";
    }
    else if (temp < 5)
    {
        std::cout << "Es ist kalt! ";
    }
    else {
        std::cout << "Es ist warm. ";
    }

    if (!sunny) {
        std::cout << "Es ist bewölkt. ";
    }
    else {
        std::cout << "Es ist sonnig ";
    }
    return 0;
}