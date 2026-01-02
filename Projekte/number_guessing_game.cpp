#include <iostream>

using std::cout; using std::cin; using std::endl;

int main () {

    int guess;
    int versuche = 0;
    srand(time(NULL));

    int num = (rand () % 100) + 1;

    cout << " Rate eine Zahl von 1 bis 100: ";

   do {

       cin >> guess;
       versuche++;

       if (guess > num)
           {
           cout << "Zu hoch! ";
           cout << "Rate nochmal! " << '\n';
       }

       else if (guess < num) {
           cout << "Zu niedrig! ";
           cout << "Rate nochmal!" << '\n';
       }
    else {
        cout << "Korrekt! " << "Du hattest " << versuche << " Versuche!";
    }
   }while (guess != num);

    return 0;
}