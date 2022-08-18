#include "main.h"
/**
 *clear_bit - Entry point
 *@n: input n is the first argument
 *@index: input index is the second argument
 * Return: Always 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
