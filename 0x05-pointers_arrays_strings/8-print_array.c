#include "main.h"
/**
 * print_array - Entry point
 *@a: input a is the first argument
 *@n: input n is the second argument
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
