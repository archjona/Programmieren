#include <iostream>

int main () {
    //integer (ganze Zahl), kann also nur ganze Zahlen speichern
    int age = 20;
    int year = 2025;
    int days = 7;

    //double (Gleitkommazahl)
    double price = 10.99;
    double temperature = 25.1;

    //char (single character, ein Buchstabe)
    char geld = '$';
    char Punkt = 'B';

   //boolean (true v false)
    bool student = true;
    bool strom = false;

    //string (Objekt dass eine Textsequenz repräsentiert)
    std::string name = "Jona";
    std::string Tag = "Donnerstag";
    std::string Essen = "Pizza";
    std::string Adresse = "geile Straße 26"; // Zahlen sind möglich aber sie werden anders behandelt als Buchstaben
    std::cout << "Wie heißt du? " << name << '\n'; // Space muss in dem "string literal" sein
    std::cout << "Ich bin " << age << " Jahre alt";

    return 0;
}
