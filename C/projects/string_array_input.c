#include <stdio.h>
#include <string.h>

int main() {

  char names[3][25] = {0}; // 1. welcher string 2. länge eines strings

  for(int j = 0; j < sizeof(names)/sizeof(names[0]); j++) {

    printf("Enter a name: ");
    fgets(names[j], sizeof(names[j]), stdin); // string input nehmen
    names[j][strlen(names[j]) - 1] = '\0'; // " " entfernen

  }
  for (int i = 0; i < 3; i++) {

    printf("%s\n", names[i]);
  }

  return 0;
}
