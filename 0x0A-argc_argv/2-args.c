#include <stdio.h>
#include "main.h"

/**
 * main - Prints all argument passed into main
 * @argc: Number of command line argumnets
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
