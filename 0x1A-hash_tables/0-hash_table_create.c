#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: is the size of the array.
 *
 * Return: pointer to the newly created hash table.
 *         otherwise if an error occurs - NULL..
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	unsigned long int i;

	tab = malloc(sizeof(hash_table_t));
	if (!tab)
		return (NULL);
	
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (!tab->array)
		return (NULL);
	for (i = 0; i < size; i++)
		tab->array[i] = NULL;

	return (tab);
}
