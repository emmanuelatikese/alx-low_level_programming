#include <stdio.h>
/**
 * _strpbrk - Entry point
 *@s: input s is an argument
 *@accept: input accept is the second argument
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
