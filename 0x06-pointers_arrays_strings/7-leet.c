#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: The string to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTIL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
