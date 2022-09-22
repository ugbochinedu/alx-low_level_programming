#include "main.h"
#include "main.h"

/**
 * print_buffer - prints a buffer 10byte
 * @b: The buffer to be printed
 * @size: The number of bytes from buffer
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	for (index = 0; index < 10; index++)
		if ((index + byte) >= size)
			printf(" ");
		else
			printf(%02x", *(b + index + byte));;
	if ((
