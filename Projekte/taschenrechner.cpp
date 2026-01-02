#include <iostream>
#include <cmath>

int main () {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "erste Zahl: ";
    std::cin >> num1;

    std::cout << "zweite Zahl: ";
    std::cin >> num2;

    std::cout << "Welche Operation? (+ - * /)";
    std::cin >> op;

    switch (op) {

        case '+':
            result = num1 + num2;
            std::cout << "Das Ergebnis lautet: " << result;
            break;

        case '-':
            result = num1 - num2;
            std::cout << "Das Ergebnis lautet: " << result;
            break;

        case '*':
            result = num1 * num2;
            std::cout << "Das Ergebnis lautet: " << result;
            break;

        case '/':
            result = num1 / num2;
            std::cout << "Das Ergebnis lautet: " << result;
            break;

        default:
            std::cout << "Nicht möglich! ";

    }

    return 0;
}