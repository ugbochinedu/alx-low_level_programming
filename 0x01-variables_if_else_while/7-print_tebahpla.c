#include <stdio.h>
/**
 * main - reverse of alphabet in reverse
 *
 * Return: Always (success)
 */
 
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
