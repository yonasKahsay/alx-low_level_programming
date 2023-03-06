#include "main.h"
#include <string.h>

/**
 * *_strstr - returns the pointer to where the accept string has the same val
 * @haystack: pointer to  data of string
 * @needle: character to match to
 *
 * Return: it returns a pointer to the first appearance of the letter c
 */
char *_strstr(char *haystack, char *needle)
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
			if (s[i] == '\0' || accept[j] == '\0')
		{
			return (NULL);
		}
		return (s + i);
		}
