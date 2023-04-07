#include "main.h"
/**
* clear bit - clears to 0 at selected index
* @n: number to print in binary
* @index: index to change
* Return: Returns 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
  if (index >= sizeof(unsigned long int) * 8)
      return (-1);
  *n &= ~(1UL << index);
  return (1);
}
