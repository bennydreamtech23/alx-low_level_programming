#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num of j
 * @index: starting from 0
 * Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = -(1 << index);
	*n = *n & j;

	return (1);
}
