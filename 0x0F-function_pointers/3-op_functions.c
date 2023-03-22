#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds numbers
 *
 * @a: first number
 * @b: second number`
 *
 * Return: it returns an integer as sum
 */
int op_add(int a, int b)
		{
		a = a + b;
		return (a);
		}
/**
 *op_sub - subtracts numbers
 *@a: first number
 *@b: second number`
 *
 *Return: it returns difference
 */
int op_sub(int a, int b)
		{
		a = a - b;
		return (a);
		}
/**
  *op_mul - multiplies numbers
  *@a: first number
  *@b: second number`
  *
  *Return: it returns product
  */
int op_mul(int a, int b)
		{
		a = a * b;
		return (a);
		}
/**
  *op_div - divides numbers
  *@a: first number
  *@b: second number`
  *
  *Return: it returns the quoitient
  */
int op_div(int a, int b)
		{
		a = a / b;
		return (a);
		}
/**
  *op_mod - finds modulus of  numbers
  *@a: first number
  *@b: second number`
  *
  *Return: it returns the modulus
  */
int op_mod(int a, int b)
		{
		a = a % b;
		return (a);
		}
