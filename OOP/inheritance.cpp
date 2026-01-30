#include <iostream>

// inheritance = a class can receive attributes and methods from another class
//               Children classes inherit from a parent class
//               Helps to reuse similar code found within mutliple classes

using namespace std;

class Animal {
    public:
        bool alive = true;

        void eat() {
            cout << "NOM NOM NOM\n";
        }
};
class Dog : public Animal{ // das hier ist die Zeile der Vererbung
    public:
        void bark() {
            cout << "The dog goes woof!\n";
        }
};
class Cat: public Animal {
    public:
        void meow() {
            cout << "The cat goes meow!\n";
        }
};

int main() {

    Dog dog;
    Cat cat;
    cout << dog.alive << '\n';
    cat.eat();
    cat.meow();
    return 0;
}
