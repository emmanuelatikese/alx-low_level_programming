#include "main.h"
/**
 * leet - Entry point
 *@s: input s is argument
 * Return: Always 0
 */
char *leet(char *s)
{
	int i = 0, j = 0, b;

	b = s[i] - 32;

	char a[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		while(j <= 7)
		{
			if (s[i] == a[j] || b == a[j])
				s[i] = j + '0';
			j++;
		}
		i++;
	}
	return (s);
}
