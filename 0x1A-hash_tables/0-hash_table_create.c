#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: this is a non negative long integer
 * Return: return a pointer or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
		return (NULL);

	unsigned long int i = 0;

	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
