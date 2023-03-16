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
		int i;
		unsigned long int j = 0, m;

		if (argc != 3)
		{
		printf("Error\n");
		exit(98);
		}
		for (i = 1 ; i < argc ; i++)
		{
		for (j = 0; j < strlen(argv[i]) ; j++)
		{
		if (isdigit(argv[i][j]) == 0)
		{
		printf("Error\n");
		exit(98);
		}
		}
		}
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", m);
		return (0);
		}
