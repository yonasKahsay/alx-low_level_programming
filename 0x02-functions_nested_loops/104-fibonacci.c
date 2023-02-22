#include "main.h"
#include <stdio.h>
#include <time.h>
void delay(int time)

{

long pause;

clock_t time1,time2;

pause = time ;

time2 = time1 = clock();
while( (time1-time2) < pause )

{

time1 = clock();

}

}
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	float j = 1, k = 2;
	int i;

	printf("%.0f, %.0f", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		delay(1000);
		j += k;
		delay(1000);
		k += j;
		delay(1000);
		printf("%.0f, %.0f", j, k);
	}
	printf("\n");
	return (0);
	}
