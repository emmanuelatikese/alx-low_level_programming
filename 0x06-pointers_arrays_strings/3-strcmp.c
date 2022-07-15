#include "main.h"
/**
 * _strcmp - Entry point
 *@s1: input s1 is the first parameter
 *@s2: input s2 is the second parameter
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	j = *s1 - *s2;
	return (j);
}
