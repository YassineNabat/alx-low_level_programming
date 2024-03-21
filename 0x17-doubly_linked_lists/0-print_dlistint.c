#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: nodes number
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
