#include <lists.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list.
 *
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head)
	{
		dlistint_t *tp = head->next;

		free(head);
		head = tp;
	}
}
