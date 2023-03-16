#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best is the most tele ", "School !!!", 11);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
