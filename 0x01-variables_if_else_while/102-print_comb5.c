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
int k;
int l;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = i;
while (k < 10)
{
l = j;
while (l < 10)
{
if (i == 9 && j == 8 && k == 9 && l == 9)
{
l++;
}
else
{
l++;
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
putchar(',');
putchar(' ');
}
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}