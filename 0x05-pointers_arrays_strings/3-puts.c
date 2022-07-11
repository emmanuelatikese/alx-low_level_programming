#include "main.h"
/**
 * _puts - Entry point
 *@str: input str is a ponter array of string
 * Return: Always 0
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num]; num++)
		_putchar(str[num]);
	_putchar('\n');
}
