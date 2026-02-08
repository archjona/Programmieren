#include <stdio.h>

int main () {

  int scores[5] = {0};

  for(int j = 0; j < 5; j++) {
    printf("Enter a score ");
    scanf("%d", &scores[j]);
  }

  for(int i = 0; i < 5; i++) {

    printf("%d ", scores[i]);

  }

  return 0;
}
