#include "main.h"
/**
 * swap_int - Entry point
 *@a: input a is the first argument integer pointer
 *@b: input b is the second argumetn integer pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
