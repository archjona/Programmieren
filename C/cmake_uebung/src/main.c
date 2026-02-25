#include "processing.h"
#include "sensor.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));

  Sensor s = {.id = 1, .value = 0};

  read_sensor(&s);

  float real = process(&s);

  printf("Sensor %d value: %.2f\n", s.id, real);

  return 0;
}
