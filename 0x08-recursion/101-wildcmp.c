#include "main.h"
#include <stdio.h>
#include "2-strlen_recursion.c"
/**
 * wildcmp - checks a string if two strings are the same
 * @s1: inputted string1
 * @s2: inputted string2
 *
 * Return: it returns 1 if they are identical
 */
int wildcmp(char *s1, char *s2)
		{
		int j = _strlen_recursion(s1);
		int k = _strlen_recursion(s2);
		char *e1 = s1 + j - 1;
		char *e2 = s2 + k - 1;

		return (check_wildcmp(s1, s2, e1, e2));
		}
/**
  * check_wildcmp - checks for a match between strings
  * @s1: pointer pointing to the starting string1
  * @e1: pointer pointing to the last character of the string1
  * @s2: pointer pointing to the starting string 2
  * @e2: pointer to the last character of string 2
  *
  * Return: it returns to know whether it is palindrome or not
  */
int check_wildcmp(char *s1, char *s2, char *e1, char *e2)
		{
			if (*s2 == '*' && *e2 == '*')
				return (1);
			if ((*s1 == *s2 && *e1 == *e2) && *(s2 - 1) == *(s1 - 1))
				return (1);
			if (*s2 == '*' && *e2 == *e1)
				return (1);
			if ((*s1 != *s2 || *e1 != *e2) && (*s2 != '*' || *e2 != '*'))
				return (0);
			return (5);
		}
