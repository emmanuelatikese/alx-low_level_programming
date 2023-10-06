#include "hash_table.h"

/**
 * hash_djb2 - this applies djb2 algorithm
 * @str: this is a str array
 * Return: return long unsigned int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned longint hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
