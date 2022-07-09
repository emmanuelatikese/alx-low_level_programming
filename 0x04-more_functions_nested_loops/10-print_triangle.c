#include "main.h"
/**
 * print_triangle - Entry point
 *@size: input is an integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a, b, c;

	for (a = 0; a < size; a++)
	{
		for (c = size - a - 1; c > 0; c = c - 1)
		{
			_putchar(' ');
		}
		for (b = size; b <= a; b++)
		{
			_putchar('#');
		}
	if (size <= 0)
		_putchar('\n');
	}
}
