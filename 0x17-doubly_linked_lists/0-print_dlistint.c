#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list.
 * @h: The head of the dlistint_t list
 *
 * This function prints all the elements of the list starting from the head.
 * It traverses the list and prints the data of each node.
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
