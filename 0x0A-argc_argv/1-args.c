#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer value counting the number of arguments
 * @argv: array of strings
 *
 * Return: it returns 0 if the program compiles ok
 */
int main(int argc, __attribute__((unused)) char *argv[])
		{
		printf("%d\n", argc - 1);
		return (0);
		}
