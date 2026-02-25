#ifndef SENSOR_H
#define SENSOR_H

typedef struct {

  int id;
  float value;
} Sensor;

int read_sensor(Sensor *s);

#endif
