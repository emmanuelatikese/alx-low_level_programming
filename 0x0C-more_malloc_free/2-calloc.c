#include "main.h"
/**
 *_calloc - Entry point
 *@nmemb: input nmemb is the first argument
 *@size: input size is the second argument
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int l = nmemb, i = size, a;

	char *f;

	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(i * l);

	if (ptr == NULL)
		return (NULL);
	f = ptr;

	for (a = 0; a < (l * i); a++)
		f[a] = '\0';
	return (ptr);
}
