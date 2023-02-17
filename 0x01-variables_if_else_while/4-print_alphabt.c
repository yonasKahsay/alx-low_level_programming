#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "abcdfghijklmnoprstuvwxyz\n";
int i;

for (i = 0; i < 25; i++)
{
putchar(alpha[i]);
}
return (0);
}
