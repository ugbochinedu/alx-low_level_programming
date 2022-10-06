#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of byte to be allocated
 * Return: A pointer to be the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *men = malloc(b);

	if (men == NULL)
		exit(98);
	return (men);
}
