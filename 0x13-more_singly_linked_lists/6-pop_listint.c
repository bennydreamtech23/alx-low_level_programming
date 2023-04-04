#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the first element of a singly linked list.
 * @head: Pointer to the list.
 * Return: Integer if successfully.
 **/

int pop_listint(listint_t **head)
{
	listint_t *ch;
	int my_data;

	if (*head == NULL)
		return (0);

	ch = *head;
	*head = ch->next;
	my_data = ch->n;
	free(ch);
	return (my_data);
}
