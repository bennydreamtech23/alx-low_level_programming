#include "main.h"

/**
 * get_bit - returns the value of the bit
 * @n: checks the bits
 * @index: which bit to check
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val, sum;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	val = 1 << index;
	sum = n & val;
	if (sum == val)
		return (1);

	return (0);
}
