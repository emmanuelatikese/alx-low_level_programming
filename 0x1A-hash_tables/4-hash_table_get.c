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
	unsigned long int x = key_index((const unsigned char *)key, ht->size);

	unsigned long i;

	if (!(ht) || !(key) || *key == '\0')
		return (NULL);

	if (x <= ht->size)
		return (NULL);

	for (i = x; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
