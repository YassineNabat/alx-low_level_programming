#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp;
	unsigned int count = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return NULL;

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
	}
	else
	{
		tmp = *h;
		while (tmp && count < idx)
		{
			tmp = tmp->next;
			count++;
		}

		if (tmp == NULL)
		{
			free(newNode);
			return NULL;
		}

		newNode->next = tmp;
		newNode->prev = tmp->prev;
		if (tmp->prev != NULL)
			tmp->prev->next = newNode;
		tmp->prev = newNode;
	}

	return newNode;
}
