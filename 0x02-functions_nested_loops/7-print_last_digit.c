#include "main.h"
/**
 * print_last_digit - Entry point
 *@n: input n is an integer
 * Return: Always 0
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');

	return (n);
}
