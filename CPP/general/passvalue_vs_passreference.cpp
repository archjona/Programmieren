#include <iostream>

void swap(std::string &x,std::string &y);

int main () {

  std::string x = "Cola";
  std::string y = "Water";

  swap(x, y);

  std::cout << "X: " << x << '\n';
  std::cout << "Y: " << y << '\n';


  
  return 0;
}
void swap(std::string &x, std::string &y) { // & muss hinzugefügt werden für pass by reference, also auf die Adresse
                                            // ohne & wäre pass by value, also nur der Wert, nicht die tasächliche Variable   
  std::string temp;

  temp = x;
  x = y;
  y = temp;

}
// würde man mit pass by value arbeiten, also ohne "&" dann sieht man dass die Adressen sehr anders sind
// man sollte eig so oft wie möglich pass by reference machen, es sei denn es gibt einen grund es nicht zu tun
