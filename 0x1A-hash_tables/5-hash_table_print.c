#include "hash_tables.h"

/**
 * hash_table_print - this does the printing
 * @ht: this is the structure
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned char x = 0;
	hash_node_t *new;

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (x == 1)
				printf(", ");

			new = ht->array[i];

			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				if (new != NULL)
					printf(", ");
			}
			x = 1;
		}
		i++;
	}
	printf("}\n");

}
