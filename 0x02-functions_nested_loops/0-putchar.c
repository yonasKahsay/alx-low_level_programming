#include "main.h"

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	char pr[] = "_putchar\n";
	int i = 0;

	while (i < 9)
		{
		_putchar(pr[i]);
		i++;
		}
	return (0);
	}
