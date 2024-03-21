#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	if (head == NULL)
		return (NULL);
	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->prev = NULL;
	nw->next = *head;
	*head = nw;
	if (nw->next != NULL)
		(nw->next)->prev = nw;
	return (nw);
}
