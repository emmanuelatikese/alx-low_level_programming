#include "main.h"
/* more headers goes there */

/**
 * postitive_or_negative - Entry point
 *@n: input n is an integer
 * Return: Always 0
 */
int postitive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
