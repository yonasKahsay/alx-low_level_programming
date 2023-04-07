#include "main.h"
/**
* get_endianness - checks for endianness
* @void: nothing
*
* Return: Returns 1 or zero
*/
int get_endianness(void)
{
  int n = 1;
  char *c = (char*)&n;
  return (*c);
}
