#include <iostream>

// overloaded constructors = multiple constructors w/ same name but different parameters
//                           allows for varying arguments when instantiating an object
using namespace std;


class Pizza{
    public:
        string topping1;
        string topping2;

        Pizza(string topping1){
            this->topping1 = topping1;
        }
        Pizza(string topping1, string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
        Pizza() {

        }


};

int main() {

    Pizza pizza1("pepperon");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;
    cout << pizza2.topping1 << '\n';
    cout << pizza2.topping2 << '\n';

    return 0;
}
