#include "main.h"
/**
 * _print_rev_recursion - Entry point
 *@s: input s is an argument
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	int count = 0;

	if (s[count] == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(s[count]);
}
