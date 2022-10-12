#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -Returns the sum of two numbers.
 * @a: The first number
 * @b: The second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference of a nd b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product ot two nos
 * @a: the first number
 * @b: The second number
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two numbers
 * @a: the first number
 * @b: The second number
 * Return: The remainder of two munbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
