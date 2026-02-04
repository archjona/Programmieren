#include <stdio.h>
#include <stdbool.h>

int main() {

  bool isOnline = true;

  printf("%s", (isOnline) ? "Online." : "Offline"); // das beim ternary op entscheidet was als %s gelesen wird

  return 0;
}
