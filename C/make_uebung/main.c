#include "processing.h"
#include "sensor.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int test = sensor();
  float result = process(test);
  printf("Number: %.2f\n", result);

  return 0;
}
