#include "main.h"

/**
 * print_last_digit - last digit
 * @n: number being tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar (nv + '0');
		return (nv);
	}
	else
	{
		nv - n % 10;
		putchar(nv + '0');
		return (nv);
	}
}
