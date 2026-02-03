#include <iostream>

int main() {

    std::string fragen[] = {
        "1. Wie heißt Phoebe mit vollem Namen?",
        "2. Was ist Simons Nachname?",
        "3. Woraus ist C++ entstanden?",
        "4. Was ist die beste Gitarrenmarke?"
    };

    std::string optionen[][4] = {
        {"A. Phoebe phi delta", "B. phi delta greiwe", "C. Phoebe Picabo Greiwe", "D. Phoebe Phi Greiwe"},
        {"A. Alpen", "B. Meyer", "C. Alp", "D. Alge"},
        {"A. C", "B. C+", "C. Holy C", "D. Rust"},
        {"A. Ibanez", "B. ESP", "C. Skervesen", "D. Music Man"}
    };

    char antwort[]= {'C', 'C', 'A', 'C'};

    int size = sizeof(fragen)/sizeof(fragen[0]); // anzahl der fragen = größe des fragen arrays

    char guess;

    int score = 0;

    std::cout << "**********QUIZ GAME************\n";

    for (int i = 0; i < size; i++) {
        std::cout << "*****************************************\n";
        std::cout << fragen[i] << std::endl;
        std::cout << "*****************************************\n";

        for (int j = 0; j < sizeof(optionen[i])/sizeof(optionen[i][0]); j++) {
            std::cout << optionen[i][j] << '\n'; //iteration über jede option für die jeweilige frage

        }
        std::cin >> guess;
        guess = toupper(guess); // toupper macht die buchstaben groß der eingabe
        if (guess == antwort[i]) {
            std::cout << "Korrekt!\n";
            score++;
        }
        else {
            std::cout << "Falsch!\n";
            std::cout << "Richtige Antwort: " << antwort[i] << "\n";
        }

    }
    std::cout << "*************************************************\n";
    std::cout << "*                    ERGEBNIS                  *\n";
    std::cout << "*************************************************\n";
    std::cout << "RICHTIGE ANTWORTEN: " << score << '\n';
    std::cout << "ANZAHL AN FRAGEN: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size) * 100 << "%";
    return 0;
}