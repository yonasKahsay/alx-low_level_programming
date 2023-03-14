#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - frees the memory hold by the grid.
 * @ac : argument count
 * @av: the argument vector
 *
 * Return: it returns noting
 */
char *argstostr(int ac, char **av)
		{
		unsigned long int j;
		int i, k, count = 0;
		char *str;

		if (ac == 0 || av == NULL)
			return (NULL);
		for (i = 0 ; i < ac ; i++)
		{
			for (j = 0 ; av[i][j] != '\0' ; j++)
				count++;
			count++;
		}
		str = malloc(sizeof(char) * (count + 1));
		k = 0;
		for (i = 0 ; i < ac ; i++)
		{
			for (j = 0 ; j <= strlen(av[i]) ; j++)
			{
			if (av[i][j] == '\0')
			{
				str[k] = '\n';
				k++;
				break;
			}
			str[k] = av[i][j];
			k++;
			}
			}
			str[k] = '\0';
		return (str);
		}
