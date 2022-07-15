#include "main.h"
/**
 * _strncpy - Entry point
 *@dest: input dest is the first parameter
 *@src: input src is the second parameter
 *@n: input n is the third parameter
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for (i = 0; i < n; i++);
		dest[i] = '\0';
	return (dest);
}
