#include "main.h"
#include <string.h>

/**
 * *_strchr - returns the pointer on the string that has the same value as c
 * @s: pointer to  data of string
 * @c: character to match to
 *
 * Return: it returns a pointer to the first appearance of the letter c
 */
char *_strchr(char *s, char c)
		{
		 int i = 0;

		while (s[i] != '\0')
		{
			if (s[i] == c)
			break;
			i++;
		}
			if (s[i] == '\0' && c != '\0')
		{
			return (NULL);
		}
		return (s + i);
		}
