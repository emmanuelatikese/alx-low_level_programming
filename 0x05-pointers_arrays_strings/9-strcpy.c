#include "main.h"
/**
 * _strcpy - Entry point
 *@dest: input dest is the first argument
 *@src: input src is the second argument
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (src);
}
