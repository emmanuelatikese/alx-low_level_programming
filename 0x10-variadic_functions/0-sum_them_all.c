#include "variadic_functions.h"
/**
 *sum_them_all - Entry point
 *@n: input n is the first argument
 *@...: showing lot of argument can be used
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;

	int i, result = 0;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		result += va_arg(p, int);
	va_end(p);
	return (result);
}
