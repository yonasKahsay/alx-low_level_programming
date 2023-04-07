#include "main.h"
/**
* flip_bits - flips the bits
* @n: first no
* @m: second no
* Return: Returns number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int result = n ^ m;
  unsigned int count = 0;
  
  while (result != 0)
  {
    count = count + (result & 1);
    result = result >> 1;
  }
  return (result);
}
