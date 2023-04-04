#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 * @head: pointer to the first node address
 * @idx: position of the new node
 * @n: data of the new node
 * Return: address of the new node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ch;
	unsigned int j = 0;

	if (*head ==  NULL &&  idx != 0)
		return (NULL);

	if (idx != 0)
	{
		ch = *head;
		for (; j < idx - 1 && ch != NULL; j++)
			ch = ch->next;

		if (ch == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = ch->next;
	ch->next = new_node;
	return (new_node);
}
