#include "main.h"
#include <string.h>

/**
 * *_strpbrk - returns the pointer to where the accept string has the same val
 * @s: pointer to  data of string
 * @accept: character to match to
 *
 * Return: it returns a pointer to the first appearance of the letter c
 */
char *_strpbrk(char *s, char *accept)
		{
		 int i = 0, j;

		while (s[i] != '\0')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				goto lastline;
				j++;
			}
			i++;
		}
lastline:
			if (s[0] == '\0' || accept[0] == '\0')
		{
			return (NULL);
		}
		return (s + i);
		}
