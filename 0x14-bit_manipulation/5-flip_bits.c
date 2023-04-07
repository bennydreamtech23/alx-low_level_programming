#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bit flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, sum;
	unsigned int x, y;

	x = 0;
	sum = 1;
	diff = n ^ m;
	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (sum == (diff & sum))
			x++;
		sum <<= 1;
	}

	return (x);

}
