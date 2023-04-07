#include "main.h"
/**
* get_endianness - checks for endianness
* 
* Return: Returns 1 or zero
*/
int get_endianness()
{
  int n = 1;
  char *endian = (char*)&n;
  if(*endian == 1)
    return (1);
  return (0);
}
