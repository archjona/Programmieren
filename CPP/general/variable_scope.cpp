#include <iostream>
int myNum = 3;
void printNum ();

using namespace std;

// local variables = deklariert innerhalb einer function or block {} !LOCAL VOR GLOBAL! (außer :: davor)
// global variables = deklariert außerhalb aller functions

int main() {
    int myNum = 5;
    printNum();
   cout << ::myNum; // :: sorgen dafür, dass die global variable genommen wird
    return 0;
}
void printNum () {
    int myNum = 2;
    cout << myNum << endl;
}