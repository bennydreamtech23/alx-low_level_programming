#include "main.h"

/**
 * binary_to_uint  - coverts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 **/
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int i;

	i = 0;
	if (!b)
	return (0);
	for (y = 0; b[y] != '\0'; y++)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
	}
	for (y = 0; b[y] != '\0'; y++)
	{
		i <<= 1;
		if (b[y] == '1')
			i += 1;
	}
	return (i);
}
