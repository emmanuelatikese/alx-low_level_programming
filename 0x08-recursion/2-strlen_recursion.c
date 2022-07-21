#include "main.h"
/**
 * _strlen_recursion - Entry point
 *@s: input s is an argument
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int i = 0, count = 1;

	if (s[i] == '\0')
		return (0);
	i++;
	return (count + _strlen_recursion(s + 1));
}
