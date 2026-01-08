#include <iostream>
using namespace std;
//Hey Jonny naaaaaaaaa wie geht es.dirrrr
char playerChoice();
char ComputerChoice();
void choosewinner(char player, char computer);


int main() {

    char player;
    char computer;

    player = playerChoice();
    computer = ComputerChoice();
    choosewinner(player, computer);
    
    return 0;
}

char playerChoice() {

    char playChoice;
    cout << "Wähle (r = Rock, p = Paper oder s = Scissors)\n";
    cin >> playChoice;
    cin.ignore(1000, '\n');
    switch (playChoice) {
        case 'r':
            cout << " Du wählst Rock!\n ";
            return 'r';
        case 'p':
            cout << " Du wählst Paper!\n ";
            return 'p';
        case 's':
            cout << " Du wählst Scissors! \n";
            return 's';
        default:
            cout << "Bitte eine der drei Möglichkeiten wählen!\n" << endl;
            return playerChoice();
    }
}

char ComputerChoice() {
    const char choices[] = { 'r', 'p', 's' };
    const char* names[] = { "ROCK", "PAPER", "SCISSORS" };

    int i = std::rand() % 3;

    std::cout << "Der Computer wählt " << names[i] << "!\n";
    return choices[i];
}

void choosewinner(char player, char computer) {
    int p, c;

    if (player == 'r') p = 0;
    else if (player == 'p') p = 1;
    else p = 2;

    if (computer == 'r') c = 0;
    else if (computer == 'p') c = 1;
    else c = 2;

    if (p == c) {
        std::cout << "Unentschieden!\n";
    }
    else if ((p + 1) % 3 == c) {
        std::cout << "Verloren!\n";
    }
    else {
        std::cout << "Gewonnen!\n";
    }
}
// Dimo war hier
