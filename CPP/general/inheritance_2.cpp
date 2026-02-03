#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape {
      public:
        double side;
        Cube(double side) {
           this->side = side;
           this->area = side * side * 6;
           this->volume = side * side * side;
        }
};

class Sphere: public Shape {
    public:
        double radius;
        const double pi = 3.14;
        Sphere(double radius) {
            this->radius = radius;
            this->area = 4 * pi * (radius * radius);
            this->volume = (4/3.0) * pi * (radius * radius * radius);
        }
};

int main() {

    Cube cube(10);
    Sphere sphere(15);

    std::cout << cube.side << '\n';
    std::cout << cube.area << '\n';
    std::cout << cube.volume << '\n';
    std::cout << sphere.radius << '\n';
    std::cout << sphere.area << '\n';
    std::cout << sphere.volume << '\n';

    return 0;
}
