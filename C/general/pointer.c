#include <stdio.h>


void birthday(int* age);
void testing(char* test);


int main() {

  int age = 25;
  int *pAge = &age;
  char* test = NULL;
                      // man kann eine string literal auch in einem pointer storen
  test = "\nHello!\n";

 // printf("%s", test);

  birthday(pAge);

  printf("You are %d years old\n", age);

  testing(test);


  char *original = "awesomeness"; // pointer auf den ersten buchstaben von der string
  char **pointer_to_original = &original; // pointer der auf die adresse des pointers zeigt
  (*pointer_to_original) = "is awesome"; // durch dereferencing wird die string literal, die der original pointer speichert, geändert
  printf("%s", original); // output von original ist geändert

  return 0;
}
void birthday(int* age) { // durch int* age wird die adresse, die im pointer gespeichet ist, in die funktion geladen

  (*age)++;
}
void testing(char* test) { //mithilfe eines pointers kann man strings in eine funktion passen

  printf("%s\n", test);

}
