#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t list.
 * @head: Address of the first list.
 **/

void free_listint(listint_t *head)
{

	listint_t *ch, *ch2;

	ch = head;

	while (ch != NULL)
	{
		ch2 = ch->next;
		free(ch);
		ch = ch2;
	}
}
