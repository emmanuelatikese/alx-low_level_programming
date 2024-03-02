#include "function_pointers.h"
/**
 * int_index - this is compares
 * @array: int list
 * @cmp: poniter int function
 * @size: int num size
 * Return: 0 or else
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0, i;

	if (array == NULL || cmp == NULL || !(size))
		return (-1);

	for (i = 0; i < size; i++)
	{
		a = cmp(array[i]);
		if (a != 0)
			return (i);
	}
	return (-1);
}
