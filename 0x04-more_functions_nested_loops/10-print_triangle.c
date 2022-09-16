#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer typr
 * @Return: void
 */

void print_trianglr(int size)
{
	int i, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
