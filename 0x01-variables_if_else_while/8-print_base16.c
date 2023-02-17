#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "0123456789abcdef\n";
int i;

for (i = 0; i < 17; i++)
{
putchar(alpha[i]);
}
return (0);
}
