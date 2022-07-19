#include <stdio.h>
/**
 * _memset - Entry point
 *@s: input s is the first argument
 *@b: input b is the second argument
 *@n: input n is the third argument
 * Return: Always string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
