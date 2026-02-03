#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> v1 = {1, 2, 3, 4};
  v1.erase(v1.begin()); // erase löscht das angegebene element des arrays
  v1.insert(v1.begin(), 8); // +1 verschiebt den insert um einen nach vorn, also in dem fall auf die position [1]
  v1.insert(v1.begin() + 1,5); //v1.begin() ist quasi der pointer der auf das erste element des arrays zeigt als argument in insert
  cout << v1[0] << endl; // 1 wurde erased aus dem array, deswegen wird dd
  cout << v1[1] << endl;


  return 0;
}
