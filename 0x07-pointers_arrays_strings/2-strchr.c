#include <stdio.h>
/**
 * _strchr - Entry point
 *@s: input s is an argument
 *@c: input c is the second argument
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int a;

	while (*(s + a))
	{
		if (*(s + a) == c)
			return (s + a);
		a++;
	}
	if (*(s + a) == c)
		return (s + a);
	return (0);
}
