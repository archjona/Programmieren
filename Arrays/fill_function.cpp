#include <iostream>

// fill() = Fills a range of elements with a specified value
//          fill(begin, end, value)


int main () {

    const int size = 99;

    std::string names[size];

    fill(names, names + (size/3), "Peter"); // last = array name + size vom array
    fill(names + (size/3), names + 2*(size/3), "Matthias");
    fill(names + 2*(size/3), names + size, "Thomas");

    for (std::string name : names) {
        std::cout << name << '\n';

    }
}