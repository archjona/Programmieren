#include <stdio.h>
#include <stdint.h>


int main() {

 int num1; // 4 Byte
 unsigned int num2; // 4 Byte (nur positive Zahlen)
 uint64_t num3; // 8 Byte (nur positive Zahlen)
 uint32_t num4; // 4 Byte (nur positive Zahlen)
 uint8_t num5; // 1 Byte (nur positive Zahlen)
 long num6; // 8 Byte
 short num7; // 2 Byte

 printf("%d\n", sizeof(num1));
 printf("%d\n", sizeof(num2));
 printf("%d\n", sizeof(num3));
 printf("%d\n", sizeof(num4));
 printf("%d\n", sizeof(num5));
 printf("%ld\n", sizeof(num6));
 printf("%hd\n", sizeof(num7));


 return 0;
}
