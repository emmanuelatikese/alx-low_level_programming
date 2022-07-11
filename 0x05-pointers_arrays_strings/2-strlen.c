#include "main.h"
/**
 * _strlen - Entry point
 *@s: input s is a character
 * Return: Always 0
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n]; )
		n++;
	return (n);
}
