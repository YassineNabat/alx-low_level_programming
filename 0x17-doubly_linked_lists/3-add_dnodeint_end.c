#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *tmp;

	if (head == NULL)
		return (NULL);
	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
		return (nw);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nw;
	nw->prev = tmp;
	return (nw);
}
