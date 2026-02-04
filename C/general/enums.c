#include <stdio.h>

enum Day{
  SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

int main () {

  enum Day today = MONDAY;

  printf("%d\n", today);

  switch(today) {

  case SUNDAY:
    printf("IT IS SUNDAY!\n");
    break;
  case MONDAY:
    printf("IT IS MONDAY!\n");
    break;

  }



}
