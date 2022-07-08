#include "main.h"
/**
 * print_line - Entry point
 *@n: input n is an integer
 * Return: Always 0
 */
void print_line(int n)
{
	int x;
	for (x = 0; x < n; x++)
		putchar('_');
	putchar('$');
	putchar('\n');
}
