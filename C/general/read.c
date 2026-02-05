#include <stdio.h>

int main() {


  FILE *pFile = fopen("output.txt", "r");
  char buffer[1024] = {0};

  if(pFile == NULL) {

    printf("FAILED\n");

    return 1;
  }

  while(fgets(buffer, sizeof(buffer), pFile) != NULL) {

    printf("%s", buffer);

  }


  fclose(pFile);

  return 0;
}
