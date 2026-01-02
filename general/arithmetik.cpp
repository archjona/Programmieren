#include <iostream>
// arithmetische operatoren: + - * / % (mod) Reihenfolge wie ganz normal in Mathe, klammern funktionieren auch
int main() {
using std::cout;
    int studenten = 21;

    //studenten = studenten + 1;
    studenten+=1; // dasselbe wie studenten + 1
    studenten++; // INCA (wie in Assembly)

    //studenten = studenten - 1;
    studenten-=1;
    studenten--; // DECA (wie in Assembly)

    //studenten = studenten * 2;
    studenten*=2;

    //studenten = studenten / 2;
    studenten/=2;

    int rest = studenten % 5; // mod = %#

    cout << rest;



}