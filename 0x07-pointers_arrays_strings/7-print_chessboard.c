#include "main.h"
/**
 * print_chessboard - Entry point
 *@a: input a is an argument
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int c = 0, b = 0;

	while (c < 8)
	{
		while (b < 8)
		{
			_putchar(a[c][b]);
			b++;
		}
		c++;
	}
}
