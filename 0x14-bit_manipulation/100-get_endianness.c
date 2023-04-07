#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: value
 */

int get_endianness(void)
{
	int j;
	char *c;

	j = 1;
	c = (char *)&j;

	return (*c);
}
