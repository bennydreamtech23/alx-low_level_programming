#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked single list
 * @h: pointer to the first node in the linked list
 * Return: number of elements.
 **/

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff;
	listint_t *count;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			count = (*h)->next;
			*h = count;
			length++;
		}
		else
		{
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
