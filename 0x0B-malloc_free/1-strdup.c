#include "main.h"
/**
 * _strdup - Entry point
 *@str: input str is the argument
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int a = 1, b = 0;

	char *n;

	if (str == NULL)
		return (NULL);
	while (str[a])
	{
		a++;
	}
	n = (char *)malloc(sizeof(char) * (a + 1));
	if (n == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		n[b] = n[a];
	}
	n[b] = '\0';
	return (n);
}
