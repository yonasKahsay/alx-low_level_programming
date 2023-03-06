#include "main.h"
#include <string.h>

/**
 * _strspn - fills the first n memory byters with a constant
 * @*s: pointer to  data of string
 * @accept: character to match to
 *
 * Return: it returns a pointer to the first appearance of the letter c
 */
unsigned int _strspn(char *s, char *accept)
		{
		 unsigned int i = 0, j;

		while (s[i] != '\0')
		{
			j = 0;
				while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					break;
				j++;
			}
		if (accept[j] == '\0')
		{
			i = i--;
			break;
		}
			i++;
		}
		return (i);
		}
