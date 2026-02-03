#include <iostream>
#include <cmath>
using std::cout; using std::cin; using std::string;
int main () {
    double a;
    double b;
    double c;

    cout << "Was ist a in cm? ";
    cin >> a;
    cout << "Was ist b in cm?";
    cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));

    cout << "c ist " << c << " cm lang.";
    return 0;
}