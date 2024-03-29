#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - check the code
 *@argc: argument count
 *@argv: the argument type
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
		int a, b;
		char *c;

		if (argc != 4)
			{
			printf("Error\n");
			exit(98);
			}
		c = argv[2];
		if ((*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' ||
			 *argv[2] == '/' || *argv[2] == '%') && c[1] == '\0')
			{
			}
		else
			{
			printf("Error\n");
			exit(99);
			}
		if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
			{
			printf("Error\n");
			exit(100);
			}
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		a = (*get_op_func(argv[2]))(a, b);
		printf("%d\n", a);
		return (0);
}
