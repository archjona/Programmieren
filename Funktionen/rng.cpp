#include <iostream>
#include <ctime>
using namespace std;

// pseudo random, nicht wirklich random, aber nah dran

int main ()
{

    srand (time (NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int Augenzahl = num1 + num2;


    cout << " Die Augenzahl der zwei Wüfel lautet: " << Augenzahl;;


    return 0;
}
