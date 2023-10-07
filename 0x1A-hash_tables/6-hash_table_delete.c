#include "hash_tables.h"

/**
 * hash_table_delete - this delete a node
 * @ht: this hash map
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *ptr;
	hash_table_t *h = ht;
	unsigned long int x = 0;

	if (!ht)
		return;

	while (x < ht->size)
	{
		if (ht->array[x])
		{
			new = ht->array[x];
			while (new)
			{
				ptr = new->next;
				free(new->value);
				free(new->key);
				free(new);
				new = ptr;
			}
		}
		x++;
	}
	free(h->array);
	free(h);
}
