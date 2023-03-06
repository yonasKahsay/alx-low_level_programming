#include "main.h"
#include <string.h>

/**
 * *_strchr - fills the first n memory byters with a constant
 * @*s: pointer to  data of string
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
			if (s[i] == '\0')
		 	(s + i) = NULL;
		return (s + i);
		}
