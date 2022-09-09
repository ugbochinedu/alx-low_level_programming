#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints text according to number output
 *
 * Return: Always (success)
 */

int main(void)
{
	int n; lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	else
	{
		printf("\n");

	return (0);
}
