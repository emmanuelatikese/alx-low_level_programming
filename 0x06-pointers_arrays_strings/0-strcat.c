#include "main.h"
/**
 * _strcat - Entry point
 *@dest: input dest the first parameter
 *@src: input src the second parameter
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest[i];
	for (i = 0; src[i] != '\0'; i++)
		src[i];
}
