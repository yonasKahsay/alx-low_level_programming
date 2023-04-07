#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: Returns nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
  if (index >= sizeof(unsinged long int) * 8)
      return (-1);
  return ((n >> index) & 1);
}
