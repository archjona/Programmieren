#include <stdio.h>
#include <stdbool.h> // für bools brauch man extra header files include

int main() {

  int age = 25; // 4 bytes
  float grade = 45.5; // 4 bytes
  double test = 3.1425637235; // 8 bytes
  char grade2 = 'A'; // 1 byte
  char name[] = "Jona-Elia Cadenbach"; // strings sind in c immer char arrays (größe je nach größe des arrays)
  bool isOnline = true; // 1 byte


  printf("You are %d years old\n", age); // %d steht für decimal, ganze zahl
  printf("Your grade is: %.1f \n", grade); // %f für gleitkomma, .1 für eine nachkommastelle
  printf("The number is: %lf\n", test); // %lf für double, ist aber egal ob %f oder %lf seit c99
  printf("Your american grade is: %c \n", grade2); // %c ist für chars
  printf("Your name is: %s\n", name); // %s ist für strings
  printf("%d", isOnline); // bei print benutzt man %d weil bool immer 1 oder 0, true oder false ist

  return 0;
}
