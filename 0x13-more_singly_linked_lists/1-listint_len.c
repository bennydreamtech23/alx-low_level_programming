#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *countfull;
	unsigned int count = 0;

	countfull = h;
	while (countfull)
	{
		count++;
		countfull = countfull->next;
	}
	return (count);
}

