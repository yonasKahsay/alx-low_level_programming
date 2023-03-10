#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "changecoin.c"

/**
 * main - Entry point
 * @argc: integer value counting the number of arguments
 * @argv: array of strings
 *
 * Return: it returns 0 if the program compiles ok
 */
int main(int argc, char *argv[])
		{
		int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, change;

		if (argc != 2)
		{
		printf("Error\n");
		return 1;
		}
		change = atoi(argv[1]);
		if (change < 0)
		{
		printf("0\n");
		return (0);
		}
		count1 = changecoin(change, 25);
		change = change - (count1 * 25);
		count2 = changecoin(change, 10);
		change = change - (count2 * 10);
		count3 = changecoin(change, 5);
		change = change - (count3 * 5);
		count4 = changecoin(change, 2);
		change = change - (count4 * 2);
		count5 = changecoin(change, 1);
		change = change - (count5 * 1);
		count1= count1 + count2 + count3 + count4 + count5;
		printf("%d\n", count1);
		return (0);
		}
