#include "main.h"
/**
 *flip_bits - Entry point
 *@n: input n is the first argument
 *@m: input m is the second argument
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t, b;

	t = n ^ m;
	b = 0;
	while (t > 0)
	{
		b = (t & 1) + b;
		t >>= 1;
	}
	return (b);
}
