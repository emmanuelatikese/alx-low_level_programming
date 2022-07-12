#include "main.h"
/**
 * rev_string - Entry point
 *@s: input s is an argument
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, p, q;

	char a;

	for (i = 0; s[i] != '\0'; )
		i++;
	p = i - 1;
	for (q = 0; q < i / 2; q++)
	{
		a = s[q];
		s[q] = s[p];
		s[p] = a;
		p -= 1;
	}
}
