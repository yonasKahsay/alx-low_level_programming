#include "main.h"
#include <stdio.h>
#include <time.h>
void delay(int time)

{

// this function will create a pause in the runtime process for the number of milliseconds that is given in 'time'

long pause;

clock_t time1,time2; // data_type variable_name

pause = time ; // if you want to be more accurate replace time with ' time * (CLOCKS_PER_SEC/1000); ' // i.e. 1000

time2 = time1 = clock(); // the clock() returns back the number of ticks till it has been called .

while( (time1-time2) < pause )

{

time1 = clock(); // this will initialize the current number of ticks to time1 ;

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
