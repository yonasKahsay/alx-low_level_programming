#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * read_textfile - Print binary number
 * @filename: The name of the file
 * @letters: The number of letters to be read and printed
 *
 * Return: returns the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
	{
		FILE *fp =  NULL;
		char ch;
		size_t count = -1;
		ssize_t count2 = 0;

		if (filename == NULL)
			return (0);
		fp = fopen(filename, "r");
		if (fp == NULL)
			return (0);
		while (feof(fp) != 1)
			{
			ch = fgetc(fp);
			count++;
			if (count == (letters))
			{
			putchar(ch);
			break;
			}
			putchar(ch);
			}
		if (count != letters)
			return (0);
		fclose(fp);
		count2 = count;
		return (count2);
	}
