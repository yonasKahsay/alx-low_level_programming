#include "main.h"
#include <stdio.h>
#include "2-strlen_recursion.c"
/**
 * is_palindrome - checks a string if it  si palindrome
 * @s: inputted string
 *
 * Return: it returns 1 if it is palindrome
 */
int is_palindrome(char *s)
		{
		int j = _strlen_recursion(s);
		char *l = s + j - 1;

		if (*s == '\0')
		return (1);
		return (check_palindrome(s, l));
		}
/**
  * check_palindrome - checks if a string is palindrome
  * @s: pointer pointing to the starting string
  * @l: pointer pointing to the last character of the string
  *
  * Return: it returns to know whether it is palindrome or not
  */
int check_palindrome(char *s, char *l)
		{
			if (*s != *l)
				return (0);
			if (s == l)
				return (1);
			if (l == s + 1 && *s == *l)
				return (1);
			return (check_palindrome(s + 1, l - 1));
		}
