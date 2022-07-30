#include "main.h"
/**
 *malloc_checked - Entry point
 *@b: input b is the only argument
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
