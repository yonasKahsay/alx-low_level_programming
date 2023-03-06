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
		 int i = 0, k = 0, l = 0;

		if (needle[0] == '\0')
			return (NULL);
		while (needle[l] != '\0')
		{
			l++;
		}
			while (haystack[i] != '\0')
		{
				if (haystack[i] == needle[0])
				{
					for (k = 1 ; k < (l) ; k++)
				{
					if (haystack[i + k] != needle[k])
						goto lastline;
				}
				return (haystack + i);
				}
lastline:
			i++;
		}
			return (NULL);
		}
