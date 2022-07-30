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

	unsigned int *ptr = (unsigned int *)malloc(sizeof(unsigned int) * (l + i));

	if (ptr == NULL)
		return (NULL);
	if (nmemb && size == 0)
		return (NULL);
	return (ptr);
}
