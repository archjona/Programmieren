#include <stdio.h>
#include <string.h>

int main() {

  int age = 0;
  float grade = 0.0f; // das f ist nur für float zahlen und soll anderen sagen, dass die grade variable eine float ist
  char initial = '\0'; // \0 ist der null terminator
  char name[30] = ""; //genau wie in c++ muss array size festgelegt werden wenn kein inhalt angegeben wird

  printf("Enter your stuff: \n");
  scanf("%d", &age); //input wird in die adresse von age geladen
  printf("Enter your grade: \n");
  scanf("%f", &grade);
  printf("Enter your initial: \n");
  scanf(" %c", &initial); // da muss ein space vor dem %, weil sonst das \n im input buffer als input gesehen wird

  getchar(); // clear vom whitespace
  printf("Enter your full name: \n");
  fgets(name, sizeof(name), stdin); // funktion für string input mit leerzeichen, sizeof weil länge des arrays ein argument ist
  name[strlen(name) - 1] = '\0'; // \n wird removed un null terminator gesetzt (strlen ist funktion für string länge)


  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.2f\n", grade);
  printf("%c\n", initial);





  return 0;
}
