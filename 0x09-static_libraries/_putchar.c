#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to choot
 * @c: The characterto print
 * Return: -1 or 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
