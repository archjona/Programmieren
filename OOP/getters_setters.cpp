#include <iostream>

using namespace std;
// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a privae attribute WRITEABLE

class Stove{
    private:
        int temperature = 0;
    public:
        Stove (int temperature){
            setTemperature(temperature);
        }

        int getTemperature() { // Diese public funktion ist ein getter, mann kann nur die info der temperatur bekommen, nicht änderbar
            return temperature;
        }
        void setTemperature(int temperature) {
            if (temperature < 0) {
             this->temperature = 0;
            }
            else if (temperature >= 10){
            this->temperature = 10;
            }
            else {
            this->temperature = temperature;
            }
        }

};

int main() {

   Stove stove(0);

 //  stove.setTemperature(-132); // ist jetzt grau um zu zeigen dass getter und setter auch mit constructors harmonieren

  // stove.temperature = 10000000; // geht nicht weil die information private ist

   cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}
