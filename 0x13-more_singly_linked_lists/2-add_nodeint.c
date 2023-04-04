#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node to the beginning of a list
 * @head: Address of the first node on the list
 * @n: Integer to install
 * Return:  Address of the new node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

	}
	else
	{
		new_node->next = *head;
		*head = new_node
	}

	return (*head);
}
