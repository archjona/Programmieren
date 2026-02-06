#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

  if (argc == 3) {

  int num_times = atoi(argv[2]); //converted eine zahl als string in einen integer

   if(strcmp(argv[1], "test") == 0) {

    printf("Das ist ein test für if-statements!\n");


  }

  for(int i = 0; i < num_times; i++) {

   printf("%s\n", argv[1]);

  }

  }
  else {
    printf("TOO FEW ARGUMENTS!\n");
    return 1;
  }
  return 0;
}
