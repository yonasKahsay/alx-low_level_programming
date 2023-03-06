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
		 int i = 0, j, x = 0;

		while (haystack[i] != '\0')
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i] == needle[j])
					x++;
				if (haystack[i] == needle[j] && x == 2)
				{
				goto lastline;
				}
				j++;
			}
			i++;
		}
lastline:
			if (haystack[i] == '\0' || needle[j] == '\0')
		{
			return (NULL);
		}
		return (haystack + i);
		}
