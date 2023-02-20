#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j, k, l, m, n;

while (i < 10)
{
j = 0;
while (j < 10)
{
k = 0;
while (k < 10)
{
l = 0;
while (l < 10)
{
if (((10 * i) + j) < ((10 * k) +l))
{
m = (10 * i) + j;
n = (10 * k) +l;
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (m == 98 && n == 99)
{ goto lastline; }
putchar(',');
putchar(' ');
lastline:
l++; }
else
{
l++; } }
k++; }
j++; }
i++; }
putchar('\n');
return (0); }
