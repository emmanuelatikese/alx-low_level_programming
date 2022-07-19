#include <stdio.h>
/**
 * _memcpy - Entry point
 *@dest: input dest is the first argument
 *@src: input src is the second argument
 *@n: input n is the third argument
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
