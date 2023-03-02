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
		int i, j;

		for (i = 0 ; i < 1000000 ; i++)
		{
		if (s1[i] == '\0')
		break;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			j++;
		}
			if (i < j)
			return (-15);
			else if (i == j)
			return (0);
			else
			return (15);
				}
