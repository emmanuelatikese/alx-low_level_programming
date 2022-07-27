#include "main.h"
/**
 * **alloc_grid - Entry point
 *@width: input width is the first argument
 *@height: input height is the second argument
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int  **a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}
