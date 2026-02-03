#include <iostream>

// if statements machen etwas wenn es true ist, wenn nicht dann nicht

int main() {

    int alter;

    std::cout << "Gib dein Alter ein: ";

    std::cin >> alter;

    if (alter >= 100) {

        std::cout << "Du bist zu alt...";

    }
    else if (alter > 18) { // == bei vergleich operator gleich

        std::cout << "Du darfst reinkommen. ";

    }
    else if (alter == 18){

        std::cout << "Knappe Kiste, aber darfst reinkommen. ";

    }

    else if (alter < 0) {

        std::cout << "Du wurdest noch nicht mal geboren.";

    }

    else {

        std::cout << "RAUS MIT DIR! ";

    }


    return 0;
}