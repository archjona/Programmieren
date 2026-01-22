#include <iostream>

// constructor = a special method that is automatically called when an object is instantiated
//               useful for assigning values to attributes as arguments

using namespace std;


class Student{
    public:
        string name;
        int age;
        double grade;

        Student(string name, int age, double grade) {
           this->name = name;
           this->age = age;
           this->grade = grade;
        }
};

int main () {

Student student1("Spongebob", 25, 3.2);

cout << student1.name << '\n';
cout << student1.age << '\n';
cout << student1.grade<< '\n';

return 0;

}
