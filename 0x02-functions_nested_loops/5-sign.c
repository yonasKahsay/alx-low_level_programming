#include <stdio.h>
int print_sign(int n)
	{
	if (n > 0)
		{
		printf("+");
		return (1);
		}
	else if (n < 0)
		{
		printf("-");
		return (-1);
		}
	else
		{
		printf("0");
		return (0);
		}
	}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
return (0);
}
