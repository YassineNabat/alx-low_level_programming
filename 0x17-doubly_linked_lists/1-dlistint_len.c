#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
		h = h->next;
	return (i);
}
