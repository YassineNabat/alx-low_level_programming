#include "lists.h"

/*
 * print_dlistint - prints all the elements of the list.
 * @h: The head of the dlistint_t list
 * @nodes : to hold data and to link to other nodes in the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	
	return (nodes);
}
