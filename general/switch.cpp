#include <iostream>


//switch = alternative zum "else if" spam

int main () {

    int monat;
    std::cout << "Welcher Monat? ";
    std::cin >> monat;

    switch(monat) {

        case 1:
            std::cout << "Es ist Januar";
            break;

        case 2:
            std::cout << "Es ist Februar";
            break;

        case 3:
            std::cout << "Es ist März";
            break;

        case 4:
            std::cout << "Es ist April";
            break;

        case 5:
            std::cout << "Es ist Mai";
            break;

        case 6:
            std::cout << "Es ist Juni";
            break;

        case 7:
            std::cout << "Es ist Juli";
            break;

        case 8:
            std::cout << "Es ist August";
            break;

        case 9:
            std::cout << "Es ist September";
            break;

        case 10:
            std::cout << "Es ist Oktober";
            break;

        case 11:
            std::cout << "Es ist November";
            break;

        case 12:
            std::cout << "Es ist Dezember";
            break;
        default:
            std::cout << "Bitte nur in Zahlen Antworten (1-12)";


    }
    return 0;
}