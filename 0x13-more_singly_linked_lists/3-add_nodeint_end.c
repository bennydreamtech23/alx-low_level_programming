#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node to the end of a list.
 * @head - pointer to a list
 * @n- Integer to add to the list.
 * Return- pointer to the newly created node
  **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new_node, *new_node2;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (head == NULL)
{
	*head = new_node;
	return (new_node);
}

new_node2 = *head
while (new_node2->next)
	new_node2 = new_node2->next;
	new_node2->new_node = new_node;
	return (new_node)
}
