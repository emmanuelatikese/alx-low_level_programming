#include "main.h"
/**
 *_calloc - Entry point
 *@nmemb: input nmemb is the first argument
 *@size: input size is the second argument
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int l = nmemb, i = size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	unsigned int *ptr = malloc(sizeof(unsigned int) * (l + i));

	if (ptr == NULL)
		return (NUL);
	return (ptr);
}
