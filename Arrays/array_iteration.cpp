#include <iostream>

using namespace std;

int main () {

    // string studenten[] = {"Peter", "Jona", "Nick"};
    char Noten[] = {'A', 'B', 'C', 'D', 'F'};


   for (int x = 0; x < sizeof(Noten)/sizeof(char); x++) {

   cout << Noten[x] << endl;
   }

    return 0;

}
