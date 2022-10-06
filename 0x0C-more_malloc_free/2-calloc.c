#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 * Return: 0 or NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int  size)
{
	void *men;
	char *filter;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	men = malloc(size * nmemb);

	if (men == NULL)
		return (NULL);

	filter = men;

	for (index = 0; index < (size * nmemb); index++)
		filter[index] = '\0';

	return (men);
}
