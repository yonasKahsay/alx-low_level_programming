#include "main.h"
/**
* get_endianness - checks for endianness
* @void: nothing
*
* Return: Returns 1 or 0
*/
int get_endianness(void)
{
<<<<<<< HEAD
  unsigned int n = 1;
  char *c = (char*)&n;
  return (*c);
=======
unsigned int n = 1;
char *c = (char*)&n;
return (*c);
>>>>>>> 86e20300ac1e31bc567bd2159e9fe09fa174bd86
}
