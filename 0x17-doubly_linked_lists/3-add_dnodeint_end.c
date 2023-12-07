#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return:  the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *endNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return NULL;

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		endNode = *head;
		while (endNode->next)
			endNode = endNode->next;

		endNode->next = newNode;
		newNode->prev = endNode;
	}

	return newNode;
}
