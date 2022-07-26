#include "main.h"
/**
 *  str_concat- Entry point
 *@s1: input s1 is the first argument
 *@s2: input s2 is the second argument 
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;

	char *w;

	if (s1 == NULL)
		s1 == " ";
	if (s2 == NULL)
		s2 == " ";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	c = a + b;
	w = (char *)malloc(ln * sizeof(char) + 1);
	b = 0;
	while (d < c)
	{
		if (d <= a)
			w[d] = s1[d];
		if (d > a)
		{
			w[d] = s2[d];
			b++;
		}
		d++;
	}
}
