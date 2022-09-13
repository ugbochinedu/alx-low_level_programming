#include <stdio.h>
/**
 * main - sum even fibonacci numbers
 * Return: always 0.
 */

int main(void)
{
	int i = 1, j = 2, sums = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sums += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sums);
	return (0);
}
