#include "main.h"
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * postitive_or_negative - Entry point
 *@n: input n is an integer
 * Return: Always 0
 */
void positive_or_negative(int n)
{

	srand(time(0));
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
}
