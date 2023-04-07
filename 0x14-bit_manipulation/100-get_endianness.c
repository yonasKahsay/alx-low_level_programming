#include "main.h"
/**
* get_endianness - checks for endianness
* 
* Return: Returns nothing
*/
int get_endianness(void)
{
  int n = 1;
  char *endian = (char*)&n;
  if(*endian == 1)
    return (1);
  return (0);
}
