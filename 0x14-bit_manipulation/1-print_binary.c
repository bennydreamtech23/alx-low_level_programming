#include "main.h"
/**
 * _power - calculate base and power
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of the base & power
 **/

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int j;

	num = 1;
	for (j = 1; j <= pow; j++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary value of the number
 * @n: num of prented
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int val, sum;
	char flag;

	flag = 0;
	val = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (val != 0)
	{
		sum = n & val;
		if (sum == val)
		{
			flag = 1;
			_putchar ('1');
		}
		else if (flag == 1 || val == 1)
		{
			_putchar('0');
		}
		val >>= 1;
	}


}
