#include "hash_tables.h"

/**
 * hash_table_set - set a node of a hash map
 * @ht: head of a hash map structure
 * @key: char string key of a node
 * @value: char value of a node
 *
 * Return: return 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht)
		return (0);

	if (key == NULL || value == NULL)
		return (0);

	unsigned long int x, i;

	x = key_index((const unsigned char *)key, ht->size);
	i = x;

	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = strdup(value);
			return (1);
		}
		i++;
	}

	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[x];
	ht->array[x] = node;

	return (1);
}
