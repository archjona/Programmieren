#include <stdio.h>

int main() {

  FILE *pFile = fopen("/home/jona/Programmieren/C/general/output.txt", "w"); // "w" steht für write mode

  char* text = "Whattup\n Nick hat voll meinen Platz geklaut bei der Messe\n Lowk wieder bock auf uni so...";

  if(pFile == NULL) {

    printf("Error opening file.\n");

    return 1;
  }

  fprintf(pFile, "%s", text);

  printf("File was written successfully!");

  fclose(pFile);

}
