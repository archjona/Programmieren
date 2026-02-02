#include <iostream>
#include <vector>

using namespace std;

void foo(vector<int> vec);
void foo2(vector<int> vec);

int main() {

    vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(9); // eine 9 wird am ende des arrays hinzugefügt
                     // die capacity verdoppelt sich, weil der vektor seine größe anpassen muss für die 9, also von 4 auf 8
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
       cout << v1.capacity() << endl;
       cout << v1.size() << endl;
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.shrink_to_fit(); // vector wird so verkleinert, dass sich die capacity and die size anpasst
       cout << v1.capacity() << endl;
       cout << v1.size() << endl;
       foo(v1);
       foo2(v1);


// Die size vergrößert sich automatisch vom vector, shrinkt aber nicht automatisch

 //   cout << v1[1] << endl; wert an stelle 1
//    cout << v1.front() << endl; wert an erster stelle des vektors
//    cout << v1.back() << endl; ende des vektors
//    cout << v1.size() << endl; Anzahl der elemente des vektors, welche sich gerade in ihm befinden
//      cout << v1.capacity() << endl; // maximale anzahl der elemente die der vektor ohne vergrößerung halten kann in dem moment der abfrage
}

void foo(vector<int> vec) {
    cout << "Name of the first array element\n";
    cout << vec.front() << endl;

}
void foo2(vector<int> vec) {
    cout << "Name of last array element\n";
    cout << vec.back();
}
