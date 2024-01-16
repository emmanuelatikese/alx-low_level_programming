#include "search_algos.h"

/**
 * linear_search - This is a linear algo function
 * @array: This is pointer array of integer
 * @size: This is all about the size of integer in arr
 * @value: This is the int of query
 *
 * Return: returns -1 or int
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	while (i < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
