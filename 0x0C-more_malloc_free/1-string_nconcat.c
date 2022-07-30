#include "main.h"
/**
 *string_nconcat - Entry point
 *@s1: input s1 is the first argument
 *@s2: input s2 is the second argument
 *@n: input n is the third argument
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = n, i;

	char *result = malloc(sizeof(char) * (l + 1));

	if (result == NULL)
	{
		s1 = "";
		s2 = "";
		return (NULL);
	}
	l = 0;
	for (i = 0; s1[i]; i++)
		result[l++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		result[l++] = s2[i];
	result[l] = '\0';
	return (result);
}
