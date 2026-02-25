#include "processing.h"

float process(const Sensor *s) {

  if (s->id == 1) {

    return (s->value + 10) / 5.0f;
  } else {
    return 0.0f;
  }
}
