#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: data to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = (*head);
	newNode ->prev = NULL;

	if (*head != NULL)
		*head->prev = new;

	*head = newNode;

	return newNode;    
}
