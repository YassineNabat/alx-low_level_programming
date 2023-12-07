#include "lists.h"

/*
 *
 *
 *
 * 
 */

size_t dlistint_len(const dlistint_t *h){
	
	int nbr = 0;
	
	if (h == NULL)
		return nbr;
		    
	while (h != NULL)
	{
		h = h -> next;
		nbr++;
	}
	return nbr;
}
