#include "hash_tables.h"

/**
 * key_index - this is create a node and others
 * @key: this is a char character
 * @size: a long unsigned int
 * Return: return non negative value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = hash_djb2(key) % size;

	return (result);
}
