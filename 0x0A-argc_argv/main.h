#ifndef MAIN_H
#define MAIN_H

/*
 *main.h
 *prototypes for functions
 */
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int find_sqrt(int n, int i);
int is_prime_number(int n);
int find_prime(int n, int i);
int check_palindrome(char* s, char* l);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int check_wildcmp(char *s1, char *s2, char *e1, char *e2);
#endif
