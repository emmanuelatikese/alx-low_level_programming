#include "main.h"
/**
 *  str_concat- Entry point
 *@s1: input s1 is the first argument
 *@s2: input s2 is the second argument
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0;

	char *w;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";
	for (a = 0; s1[a] || s2[a]; a++)
		c++;
	w = malloc(sizeof(char) * c);
	if (w == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		w[b++] = s1[a];
	for (a = 0; s2[a]; a++)
		w[b++] = s2[a];
	return (w);
}
