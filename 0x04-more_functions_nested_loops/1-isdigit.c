#include "main.h"
/**
 * _isdigit - Entry point
 *@c: input c is an integer
 * Return: Always 0
 */
int _isdigit(int c)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		if (n + '0' == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
