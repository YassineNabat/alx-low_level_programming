#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to look into
 * @key: key looking for
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[index];
	while (!tp)
	{
		if (strcmp(tp->key, key) == 0)
		return (tp->value);
		tp = tp->next;
	}
	return (NULL);
}
