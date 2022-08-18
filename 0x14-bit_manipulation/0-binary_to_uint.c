#include "main.h"
/**
 *binary_to_uint - Entry point
 *@b: input b is the first argument
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d, m = 1;

	int l;

	d = 0;

	if (b == '\0')
		return (0);
	for (l = 0; b[l];)
		l++;
	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		d += (b[l] != '0' && b[l] != '1') * m;
		m = m * 2;
	}
	return (d);
}
