#include "hash_tables.h"

/**
 * hash_table_get - this retrieves values associated with key
 * @ht: this is hash map structure
 * @key: this is the key of the node
 *
 * Return: key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;


	if (!(ht) || !(key) || *key == '\0')
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);

	if (x >= ht->size)
		return (NULL);

	hash_node_t *new = ht->array[x];

	while (new)
	{
		if (strcmp(new->key, key) == 0)
			return new->value;
		node = node->next;
	}
	return (NULL);
}
