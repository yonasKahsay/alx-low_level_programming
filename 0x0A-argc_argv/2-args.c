#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer value counting the number of arguments
 * @argv: array of strings
 *
 * Return: it returns 0 if the program compiles ok
 */
int main(int argc, char *argv[])
		{
		int i = 0;

		for (i = 0 ; i < argc ; i++)
		{
		printf("%s\n", argv[i]);
		}
		return (0);
		}
