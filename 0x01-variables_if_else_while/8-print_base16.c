#include <stdio.h>
/**
 * main - numbers below 16
 *
 * Return: Always (success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
