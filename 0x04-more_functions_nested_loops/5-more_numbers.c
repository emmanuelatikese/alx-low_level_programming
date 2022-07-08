#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int n, count;

	for (count = 1; count < 11; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n < 10)
			{	
				_putchar(n + '0');
			}
			else if (n > 9)
			{	
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
		
			}
		}
		_putchar('\n');
	}
}
