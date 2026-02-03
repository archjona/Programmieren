#include <iostream>

using namespace std;

// return = return einen wert an den ort, wo die encompassing function gecalled wurde

double square(double length);
double cube(double length);

int main () {

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);
    cout << "area is " << area << "cm²\n";
    cout << "volume is " << volume << "cm³";
    return 0;
}
double square(double length) {
    return length * length;
}
double cube(double length) {
    return length * length * length;
}