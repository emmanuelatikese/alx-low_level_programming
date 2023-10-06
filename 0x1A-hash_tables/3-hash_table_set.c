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

	hash_node_t *node = ht->array;

	if (key == NULL || value == NULL)
		return (0);

	if (node[0] == NULL)
	{
		node->key = strdup(key);
		node->value = strdup(value);
		return (1);
	}
	while (!node)
	{
		if (strcmp(node[i]->key, key))
		{
			node->value = strdup(value);
			return (1);
		}
		i++;
		node = node->next;
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (1);
}
