#include "lists.h"

/**
 * find_listint_loop - search for the loop.
 * @head: linked list head files
 * Return: integar.
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pace = head;
	listint_t *steady = head;

	if (!head)
		return (NULL);

	while (pace && steady && steady->next)
	{
		steady = steady->next->next;
		pace = pace->next;
		if (steady == slow)
		{
			pace = head;
			while (pace != steady)
			{
				pace = pace->next;
				fast=fast->next;
			}
			return (steady):
		}
	}
	return (NULL);
}
