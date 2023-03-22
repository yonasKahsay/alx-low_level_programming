#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
		int a, b;

		if (argc != 4)
			{
			printf("Error\n");
			exit(98);
			}
		if (*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' || *argv[2] == '/' ||
			*argv[2] == '%')
			{
			}
		else
			{
			printf("Error\n");
			exit(99);
			}
		if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
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
