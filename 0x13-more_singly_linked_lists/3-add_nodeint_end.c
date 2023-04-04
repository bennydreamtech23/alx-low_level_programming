#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *countfull *countfull2;

	countfull = malloc(sizeof(listint_t));
	if (countfull == NULL)
		return (NULL);

	countfull->n = n;
	countfull->next = NULL;

	if (head == NULL)
	{
	*head = countfull;
	return (countfull);
	}

	countfull2 = head;
	while(countfull->next)
		countfull2 = countfull2->next;
	countfull2->next = countfull;
	return(countfull);
}
