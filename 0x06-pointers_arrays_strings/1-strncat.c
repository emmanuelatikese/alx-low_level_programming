#include "main.h"
/**
 * _strncat - Entry point
 *@dest: input dest the first parameter
 *@src: input src the second parameter
 *@n: input n the third parameter
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	for (i = 0; dest[i] != '\0'; i++)
		l++;
	for (i = 0; i < n; i++)
		dest[i + l] = src[i];
	dest[i + l] = '\0';
	return (dest);
}
