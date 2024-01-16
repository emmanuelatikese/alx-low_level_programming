#include "search_algos.h"
/**
 * binary_search - This is a binary algo function
 * @array: list of arrays of ints
 * @size: the length of the array
 * @value: the int query
 *
 * Return: returns -1 or int
 */

int binary_search(int *array, size_t size, int value)
{
	int lo = 0, hi = (int) size;
	int mid, i;

	if (array == NULL)
		return (-1);

	for (; lo < hi; lo++)
	{
		mid = (lo + hi) / 2;

		printf("Searching in array: ");
		for (i = lo; i < (hi - 1); i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] > value)
			hi = mid - 1;
		else if (array[mid] < value)
			lo = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
