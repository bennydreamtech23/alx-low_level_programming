#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of a listint_t
 * @head: Address the list
 * Return: Integer if successfully
 **/

int pop_listint(listint_t **head)
{
	listint_t *ch;
	int my_var;

	if (*head == NULL)
		return (0);

	ch = *head;
	*head = ch->next;
	my_var = tp->n;
	free(ch);
	return (my_var);
}
