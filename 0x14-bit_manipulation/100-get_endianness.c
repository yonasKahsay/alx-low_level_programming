#include "main.h"
/**
* get_endianness - checks for endianness
* @void: nothing
*
* Return: Returns 1 or 0
*/
int get_endianness(void)
{
  unsigned int n = 1;
  char *c = (char*)&n;
  return (*c);
}
