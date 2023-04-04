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

	listint_t *ch, *ch2;

	ch = malloc(sizeof(listint_t));
	if (ch == NULL)
		return (NULL);

	ch->n = n;
	ch->next = NULL;

	if (*head == NULL)
	{
	*head = ch;
	return (ch);
	}

	ch2 = *head;
	while (ch->next)
		ch2 = ch2->next;
	ch->next = ch;
	return (ch);
}
