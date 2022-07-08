#include "main.h"
/**
 * print_square - Entry point
 *@size:input size is an integer
 * Return: Always 0
 */
void print_square(int size)
{
	int x, count;

	for (count = 1; count <= size; count++)
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
