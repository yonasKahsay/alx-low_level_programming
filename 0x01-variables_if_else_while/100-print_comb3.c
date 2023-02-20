#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j;
while (i < 9)
{
j = 0;
j = i + 1;
while (j < 10)
{
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
return (0);
}
