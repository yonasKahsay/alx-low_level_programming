#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: integer value counting the number of arguments
 * @argv: array of strings
 *
 * Return: it returns 0 if the program compiles ok
 */
int main(int argc, char *argv[])
		{
		int m = 0, i;

		if (argc == 1)
		{
		printf("0\n");
		return (0);
		}
		for (i = 1 ; i < argc ; i++)
		{
		long unsigned int j = 0;

		for (j = 0; j < strlen(argv[i]) ; j++)
		{
		if (isdigit(*argv[j]) == 0)
		{
		printf("Error\n");
		return (1);
		}
		}
		m += atoi(argv[i]);
		}
		printf("%d\n", m);
		return (0);
		}
