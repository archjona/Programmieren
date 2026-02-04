#include <stdio.h>


void birthday(int* age);
void testing(char* test);


int main() {

  int age = 25;
  int *pAge = &age;
  char* test = NULL;
                      // man kann eine string literal auch in einem pointer storen
  test = "Hello!\n";

 // printf("%s", test);

  birthday(pAge);

  printf("You are %d years old", age);

  testing(test);

  return 0;
}
void birthday(int* age) { // durch int* age wird die adresse, die im pointer gespeichet ist, in die funktion geladen

  (*age)++;
}
void testing(char* test) { //mithilfe eines pointers kann man strings in eine funktion passen

  printf("%s\n", test);

}
