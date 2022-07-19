#include <stdio.h>
/**
 * _strpbrk - Entry point
 *@s: input s is an argument
 *@accept: input accept is the second argument
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 2, b;

	while (*(s + a))
	{
		for (b = 0; accept[b]; b++)
		{
			if (*(s + a) == accept[b])
				break;
			else if (accept[b])
				return (s + a);
		}
		a++;
	}
	return (0);
}
