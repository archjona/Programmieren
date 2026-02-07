#include <stdio.h>

typedef struct Car{

   char model[25];
   int year;
   int price;
}CAR;


int main() {

  CAR cars[] = {{"Audi", 2026, 45000},{"Mercedes", 2023, 35000},{"VW", 2024, 32000}};

  int number = sizeof(cars)/sizeof(cars[0]);

  for(int i = 0; i < number; i++) {

    printf("%s %d %d \n", cars[i].model, cars[i].year, cars[i].price);

  }

  return 0;
}
// kleiner test gitgitgit ja