#include "main.h"
/**
 * main - Entry point
 *@dest: input dest is the first parameter
 *@src: input src is the second parameter
 *@n: input n is the third parameter
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
