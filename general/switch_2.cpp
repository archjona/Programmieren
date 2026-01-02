#include <iostream>

int main()

{

    char note;

    std::cout << "Welche note?: ";
    std::cin >> note;

    switch(note) {

        case 'A':
            std::cout << "Sehr gut! ";
            break;

        case 'B':
            std::cout << "Gut ";
            break;

        case 'C':
            std::cout << "befriedigend ";
            break;

        case 'D':
            std::cout << "mangelhaft";
            break;

        case 'F':
            std::cout << "mangelhaft";
            break;
        default:
            std::cout << "Noten gehen nur von A bis F. ";

    }


    return 0;
}