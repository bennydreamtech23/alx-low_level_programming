#include "main.h"

/**
 * set_bit - to set the value of a bit to 1 at agiven index
 * @index: pointer where the bit to start from
 * @n: pointer number of j
 * Return: values
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}
