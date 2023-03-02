#include "main.h"
#include <string.h>

/**
 * _strcmp - This funtion returns an integer based on the  comparison.
 * @s1: inputted string
 * @s2: inputted string
 *
 * Return: it returns an integer
 */
int _strcmp(char *s1, char *s2)
		{
		int i;

		for (i = 0 ; i < 1000000 ; i++)
		{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		}
		return (0);
		}
