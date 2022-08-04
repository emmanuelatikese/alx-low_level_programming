#include "variadic_functions.h"
/**
 *print_numbers - Entry point
 *@separator: input separator is the first argument
 *@n: input n is the second argument
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;

	int i, result;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
