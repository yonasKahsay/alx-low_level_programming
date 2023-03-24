#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>
/*
 *variadic_functions.h
 *prototypes for functions
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
  *op_t - subtracts numbers
  *@sy: symbol for data type
  *@typ: type of data type
  *@pr : print type
  *
  *Return: it returns difference
  */
#endif
