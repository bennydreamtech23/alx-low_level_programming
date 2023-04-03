#include "lists.h"


/**
 * print_listint - Print elements of a singly linked list.
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

