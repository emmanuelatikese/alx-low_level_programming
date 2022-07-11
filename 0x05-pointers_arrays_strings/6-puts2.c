#include "main.h"
/**
 * puts2 - Entry point
 *@str: input str is a string
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
