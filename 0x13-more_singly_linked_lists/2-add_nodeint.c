#include "lists.h"
#include <stdlib.h>

/**
 * add node - adds a new node at the beginning of a listint_t list
 * @h: Pointer to a list.
 * Return: Integer.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *countfull;

	 countfull = malloc(sizeof(listint_t))
		 if (countfull == NULL)
			 return (NULL)
				 countfull->n = n
				 countfull->next = *head
				 return (head);
}
