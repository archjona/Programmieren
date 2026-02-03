#include <iostream>

using std::cout;

int main ()
{
    srand (time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum) {
        case 1:

            cout << "Du bist gestorben... " << '\n';
            break;

        case 2:

            cout << "Du bist entkommen! " << '\n';
            break;
        case 3:
            cout << "Du bist gestorben... " << '\n';
                       break;
        case 4:
            cout << "Du bist entkommen! " << '\n';
           break;

        case 5:
            cout << "Du bist gestorben... " << '\n';
                  break;
    }
    return 0;
}