#include <iostream>



struct Car{

    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);

int main () {
    Car car1;
    Car car2;

    car1.model = "Ferrari";
    car1.year = 2016;
    car1.color = "Red";

    car2.model = "Audi";
    car2.year = 2012;
    car2.color = "Black";

    std::cout << &car1 << '\n';
    printCar(car1); // pass by value wenn ein struct in eine funktion kommt

    return 0;
}
void printCar (Car car) { // struct fungiert als datentyp

    std::cout << &car<< '\n';
    std::cout << car.model << '\n'; // wegen pass by value sind diese outputs nur coopies der member, nicht die echten
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
