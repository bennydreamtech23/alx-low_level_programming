#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe -frees a linked list
 * @h: direction to the first node
 * Return: number of elements in the freed list
**/

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *ch;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			ch = (*h)->next;
			*h = ch;
			len++;
		}
	}
	*h  = NULL;
	return (len);
}
