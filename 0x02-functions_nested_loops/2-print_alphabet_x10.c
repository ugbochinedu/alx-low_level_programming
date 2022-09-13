#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet x10
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alp, alp2;

	for (alp = '0'; alp <= '9'; alp++)
	{
		for (alp2 = 'a'; alp2 <= 'z'; alp2++)
		{
			_putchar(alp2);
		}
		_putchar('\n');
	}
}
