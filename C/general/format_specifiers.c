#include <stdio.h>

int main () {

 // width
   printf("------------------- WIDTH ----------------------\n");

   int num1 = 1;
   int num2 = 10;
   int num3 = 100;
   int num4 = 50;

  printf("%3d\n", num1); // die 3 sagt, dass 3 ziffern eingenommen werden, deswegen 2 spaces vor der 1
  printf("%-4d\n", num2); // die -4 sagt, dass die nummer "justified" ist, also kommt erst die zahl, dann die spaces
  printf("%05d\n", num3); // füllt den space vor der zahl mit 0
  printf("%+d\n", num4); // zeigt das vorzeichen der zahl (auch wenn sie positiv ist)

  printf("---------------------- PRECISION -------------------------\n");


  // precision

  float price1 = 19.99;
  float price2 = 12.5;
  float price3 = -103.24;

  printf("%.2f\n", price1); // zeigt die float number mit zwei nachkommastellen
  printf("%7.2f\n", price2); // width 7, 2 nachkommastellen
  printf("%+8.3f\n", price3); // vorzeichen anzeige mit width 8 und 3 nachkommastellen



  return 0;
}
