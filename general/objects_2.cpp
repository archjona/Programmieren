#include <iostream>

using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        string color;

        void accelerate() {
            cout << "You accelerate!\n";
        }
        void brake() {
            cout << "You step on the brakes!\n";
        }
};


int main () {

    Car car1;

    car1.brand = "Audi";
    car1.model = "A3";
    car1.year = 1996;
    car1.color = "yellow";

    cout << car1.brand<< '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();
    return 0;
}
//kleiner git test
