#include <stdio.h>
#include <stdlib.h>

// malloc is a function in c that dynamically allocates
// a specified number of bytes in memory


int main() {

  int number = 0;
  printf("Enter the number of grades:");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char)); // char pointer ist quasi char array und mit malloc wird die größe des arrays dynamisch verändert

  if(grades == NULL) {
    perror("Memory allocation failed\n");
    return 1;
  }

  for(int i = 0; i < number; i++) {

    printf("Enter grade #%d", i + 1);
    scanf(" %c", &grades[i]);

  }

  for(int i = 0; i < number; i++) {
    printf("%c ", grades[i]);
  }

  free(grades); // returning the rented space back to the OS

  grades = NULL; // avoids dangling pointers


  return 0;
}
