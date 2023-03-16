#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of s2
 *
 * Return: it returns nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
		{
		unsigned int i = 0, j = 0, k = 0, l = 0;
		char *ret;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		while (s1[i] != '\0')
		{
			i++;
		}
		while (s2[j] != '\0')
		{
			j++;
		}
		if (n >= j)
			n = j - 1;
		ret = malloc(sizeof(char) * (i + n));
		if (ret == NULL)
			return (NULL);
		for (k = 0 ; k <= (n + i) ; k++)
		{
			if (k < i)
				ret[k] = s1[k];
			else if (k == (n + i))
				ret[k] = '\0';
			else
				{
				ret[k] = s2[l];
				l++;
				}
		}
		return (ret);
		}
