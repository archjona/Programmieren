#include "sensor.h"
#include <stdio.h>
#include <stdlib.h>

int read_sensor(Sensor *s) {

  if (!s)
    return -1; // error

  s->value = rand() % 100;

  return 0; // success
}
