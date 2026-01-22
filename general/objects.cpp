#include <iostream>

// object = a collection of attributes and methods
//          They can have characteristics and could perform actions
//          Can be use to mimic real world items (ex. Phone, Book, Dog)
//          Created from a class which acts as a "blue-print"

class Human{
    public:
        std::string name; // man kann die sachen auch hier schon festlegen, dann muss man das in der main funktion nicht mehr
        std::string occupation;
        int age;
        void eat() {
            std::cout << "This person is eating\n";
        }
        void drink() {
            std::cout << "This person is eating \n";
        }
        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};

int main() {


    Human human1;
    human1.name = "Peter";
    human1.occupation = "Player";
    human1.age = 10;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}
