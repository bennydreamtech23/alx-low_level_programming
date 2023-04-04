#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -find a node in the list
 * @head: pointer of the first node in the list.
 * @index: position of the node to find
 * Return: node pointed to
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;

	if (head == NULL)
		return (NULL);

	for (z = 0; z < index; z++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
