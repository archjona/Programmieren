#include <iostream>

using namespace std;

// do while loop  = führt erst einen block code aus, DANN wiederholen wenn die condition true ist



int main () {

    int num;

     do{

        cout << "Enter positive num: ";
        cin >> num;

    }while (num < 0);

    cout << "num is: " << num;
    return 0;
}