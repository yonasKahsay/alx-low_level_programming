#include "main.h"
/**
 * get_bit - prints index equivalent of a decimal number
 * @n: number to print in binary
 * @index: the index to print
 *
 * Return: Returns index
 */
int get_bit(unsigned long int n, unsigned int index)
{
  if (index >= sizeof(unsinged long int) * 8)
      return (-1);
  return (n >> index) & 1;
}
