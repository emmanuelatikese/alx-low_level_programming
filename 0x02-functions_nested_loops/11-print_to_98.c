#include "main.h"
/**
 * print_to_98 - Entry point
 *@n: input this is an integer
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n <= 97)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
	}
	else
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n >= 99)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
	}
	printf("\n");
}
