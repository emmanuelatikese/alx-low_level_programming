#include <stdio.h>
/**
 * _strspn - Entry point
 *@s: input s is the first argument
 *@accept: input accept is the second argument
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b;

	while (*(s + a))
	{
		for (b = 0; accept[b]; b++)
		{
			if (*(s + a) == accept[b])
				break;
		}
		a++;
	}
	return (a)
}
