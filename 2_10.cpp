/* echoDecHex.c
 * Asks user to enter an unsigned integer in decimal and
 * one in hexadecimal then echoes both in both bases.
 * 2017-09-29: Bob Plantz
 */
//#include <iostream>
#include <stdio.h>

int main()
{
    unsigned int x;
   int y;

  printf("Enter an unsigned decimal integer: ");
  scanf_s("%u", &x);

  printf("Enter a bit pattern in hexadecimal: ");
  scanf_s("%x", &y);

  printf("%p is the memory address for %#010u, and\n", &x, x);
  printf("%p is the memory address for %u\n", &y, y);

  return 0;
}

/*
2. The program prints out 0x00000000 which is a 32_bit output.
3. The signed int is a 4bytes but half is partitioned(2 billion both ways) for negative intagers welll the unsigned version starts at 0(up to around 4 billion)
4. The compiler saves 4 bytes for each of the ints.
*/