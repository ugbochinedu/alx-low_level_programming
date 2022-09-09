#include <stdio.h>
/**
 * main - print numbers 0 to 9 without char
 *
 * Return: always (successs)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
