#include "main.h"
/**
 *array_range - Entry point
 *@min: input min is the first argument
 *@max: input max is the second argument
 * Return: Always 0
 */
int *array_range(int min, int max);
{
	int i = min, j = max, a, t;

	t = j - i + 1;

	int *ptr = (int *)malloc(sizeof(int) * (t));

	if (min > max)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < t; a++)
		ptr[a] = i++;
	return (ptr);
}
