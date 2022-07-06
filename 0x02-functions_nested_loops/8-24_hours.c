#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int n, b;

	for (n = 0; n < 24; n++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
