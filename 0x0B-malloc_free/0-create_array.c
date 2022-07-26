#include "main.h"
/**
 * create_array - Entry point
 *@size: input size the first argument
 *@c: input c is the second argument
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *w;

	unsigned int n;

	if (size == 0)
		return (NULL);
	w = (char *)malloc(size * sizeof(char));
	if (w == NULL)
	{	
		return (NULL);
	}
	while (n < size)
	{
		w[n] = c;
		n++;
	}
	return (w);
}
