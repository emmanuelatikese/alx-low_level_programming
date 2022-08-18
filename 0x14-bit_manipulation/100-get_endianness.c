#include "main.h"
/**
 *get_endianness - Entry point
 * Return: Always 0
 */
int get_endianness(void)
{
	int n = 1;

	char *d;

	d = (char *)&n;
	if (*d == 1)
		return (1);
	return (0);
}
