#include <iostream>

int main () {

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {

        std::cout << "Was willste essen? oder q zum quitten #" << i + 1 << ":" << std::endl;
        std::getline (std::cin, temp);
        if (temp == "q") {
            break;
        }
        else {
            foods [i] = temp;
        }
    }

    std::cout << "Du willst Folgendes essen:\n" ;

    for (int x = 0; !foods[x].empty(); x++) { // wird ausgeführt solange der inhalt der stelle x nicht empty ist
        std::cout << foods[x] << std::endl;
    }

    return 0;
}