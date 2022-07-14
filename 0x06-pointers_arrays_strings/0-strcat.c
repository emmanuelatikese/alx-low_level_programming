#include "main.h"
/**
 * _strcat - Entry point
 *@dest: input dest the first parameter
 *@src: input src the second parameter
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		j++;
	for (i = 0; src[i] != '\0'; i++)
		dest[i + j] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
