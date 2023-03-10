#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

		if (argc <= 1)
		{
		printf("0\n");
		}
		for (i = 1 ; i < argc ; i++)
		{
		if (isdigit(argv[i] == 0))
		{
		printf("Error\n");
		return (1);
		}
		m += atoi(argv[i]);
		}
		printf("%d\n", m);
		return (0);
		}
