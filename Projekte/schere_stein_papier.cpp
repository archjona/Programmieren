#include <iostream>
#include <ctime>

using namespace std;

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
    do{
        cout << "Wähle (r = Rock, p = Paper oder s = Scissors)\n";
        cin >> playChoice;
        switch (playChoice) {

            case 'r':
                playChoice = 'r';
                cout << " Du wählst Rock!\n ";
                break;
            case 'p':
                playChoice = 'p';
                cout << " Du wählst Paper!\n ";
                break;
            case 's':
                playChoice = 's';
                cout << " Du wählst Scissors! \n";
                break;
            default:
                cout << "Bitte eine der drei Möglichkeiten wählen!\n" << endl;
        }
    }while (playChoice != 's' && playChoice != 'r' && playChoice != 'p');
    return playChoice;
}

char ComputerChoice () {

    char CompChoice;

    srand (time(NULL));
    int Choice = (rand() % 3) + 1;
    switch (Choice) {
        case 1:
            CompChoice = 'r';
            cout << "Der Computer wählt ROCK! \n ";
            break;
        case 2:
            CompChoice = 'p';
            cout << "Der Computer wählt PAPER! \n";
            break;
        case 3:
            CompChoice = 's';
            cout << "Der Computer wählt SCISSORS! \n";
            break;
    }
    return CompChoice;
}
void choosewinner(char player, char computer) {
    switch (player) {
        case 'r':  if (computer == 'r') {
                cout << " Unentschieden!\n ";
        }
            else if (computer == 'p') {
                cout << " Verloren!\n ";
            }
            else {
                cout << " Gewonnen!\n ";
            }
            break;
       case 'p':  if (computer == 'p') {
           cout << "Unentschieden!\n ";
       }
         else if (computer == 's') {
             cout << "Verloren!\n ";
         }
         else  {
             cout << "Gewonnen!\n ";
         }
            break;
        case 's': if (computer == 's') {
            cout << "Unentschieden!\n ";
        }
            else if (computer == 'r') {
            cout << "Verloren!\n ";
            }
            else
            {
                cout << "Gewonnen!\n ";
            }
            break;
    }

}