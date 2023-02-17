#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n";
int i;

for (i = 0; i < 28; i++)
{
putchar(alpha[i]);
}
return (0);
}
