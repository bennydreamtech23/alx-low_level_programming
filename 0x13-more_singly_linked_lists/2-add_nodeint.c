#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: Pointer to a list.
 * @n: Integer to add to the list.
 * Return: Pointer to the newly created node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

new_node =  malloc(sizeof(listint_t))
		if (new_node == NULL)
			return (NULL)
				
				new_node->n = n;
				new_node->next = *head;
				return (*head);
}
