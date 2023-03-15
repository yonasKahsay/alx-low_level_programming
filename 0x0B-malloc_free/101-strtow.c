#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string to words
 * @str : inputted string
 *
 * Return: it returns noting
 */
char **strtow(char *str)
		{
		int i, j = 0, k, count = 0, count_space = 0;
		char **word;

		if (*str == '\0' || str == NULL)
			return (NULL);
		while (str[count] != '\0')
		{
			if (str[count] == ' ')
				count_space++;
			count++;
		}
		word = malloc(sizeof(char) * count * count_space);
		if (word == NULL)
			return (NULL);
		word[0] = str;
		for (i = 0 ; i < count_space ; i++)
		{
			for (j = 0; k < count ; j++)
			{
				if (str[k] == ' ' || str[k] == '	')
				{
					word[i][j] = '\0';
					k++;
					word[i][j + 1] = '\n';
					word[i][j + 2] = '\0';
					break;
				}
				word[i][j] = str[k];
				k++;
			}
		}
		return (word);
		}
