#include "function_pointers.h"

/**
 * array_iterator - this iterate throught func
 * @array: pointer int
 * @size: unsig int
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
