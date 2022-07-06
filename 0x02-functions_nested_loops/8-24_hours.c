#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int n = 0, b = 0;

	while (n < 24)
	{
		while (b < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		n++;
	}
}
