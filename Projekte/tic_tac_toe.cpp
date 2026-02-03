#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main () {   

  char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  char player = 'X';
  char computer = 'O';
  bool running = true;

    
  drawBoard(spaces); // array decayed zum pointer, also pointer ist nicht nötig

  while(running) {
      playerMove(spaces, player);
      drawBoard(spaces);
      if(checkWinner(spaces, player, computer)){
        running = false;
        break;
      } 
      else if(checkTie(spaces)) {
          running = false;
          break;
      }

      computerMove(spaces, computer);
      drawBoard(spaces);
      if(checkWinner(spaces, player, computer)){
        running = false;
        break;
      } 
      else if(checkTie(spaces)) {
          running = false;
          break;
      }
    
  }
  std::cout << "GAME OVER!\n";

  return 0;
}
void drawBoard(char *spaces) {
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';

    }
void playerMove(char *spaces, char player) {
  
    int number;
    do {
      std::cout << "Enter a spot to place a marker (1-9): \n";
      std::cin >> number;
      number--;
      if(spaces[number] == ' '){
        spaces[number] = player;
        break;
      }
           
    }while(number >= 0 && number <= 8);


}
void computerMove(char *spaces, char computer) {

  int number;
  srand(time(0)); // Platzieren des seeds der randomness

  while(true){

    number = rand() % 9; // rand() invoked eine random zahl dann                     
    if(spaces[number] == ' ') {
      spaces[number] = computer;
      break;
    }
  }

}
bool checkWinner(char *spaces, char player, char computer) {

    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {      //erste reihe
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
 
   else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {  //erste spalte
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }

   else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) { //diagonal links nach rechts
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }  

   else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) { // zweite spalte
        spaces[1] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }    
   else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) { //diagonal rechts nach links
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
   else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) { // dritte spalte
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }    
   else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) { //zweite reihe
        spaces[3] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
   else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) { //dritte reihe
        spaces[6] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }    
   else {
     return false;
   }    
    return true;
}
bool checkTie(char *spaces) {

    for(int i = 0; i < 9; i++) {
      if(spaces[i] == ' '){
      return false;
      }
         
    }
  std::cout << "It's a tie!\n";
  return true;
}


