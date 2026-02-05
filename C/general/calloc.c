#include <stdio.h>
#include <stdlib.h>

// calloc() = Contiguos Allocation.
//            Allocates memory dynamically and sets all allocated bytes to 0.
//            malloc() ist faster, but calloc leads to less bugs
//            calloc(#, size)



int main() {

  int number = 0;

  printf("Enter the number of players: ");

  scanf("%d", &number);

  int* scores = calloc(number, sizeof(int));

  if(scores == NULL) {

    perror("ERROR!\n");

    return 1;
  }

  for(int i = 0; i < number; i++) {

    printf("Enter score: ");
    scanf("%d ", &scores[i]);

  }

  for(int i = 0; i < number; i++) {

    printf("%d ", scores[i]);



  }

  free(scores);

  scores = NULL;


  return 0;
}
