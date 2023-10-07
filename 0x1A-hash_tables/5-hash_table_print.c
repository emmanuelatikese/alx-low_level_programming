#include "hash_tables.h"

/**
 * hash_table_print - this does the printing
 * @ht: this is the structure
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	hash_node_t *new;

	if (!ht)
		return;

	printf("{");
	x = 0;

	while (x < ht->size)
	{
		if (ht->array[i])
		{
			if (i == 1)
				printf(", ");

			new = ht->array[i];

			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				if (new != NULL)
					printf(", ");
			}
			i = 1;
		}
		x++;
	}
	printf("}\n");

}
