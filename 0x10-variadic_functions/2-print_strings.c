#include "variadic_functions.h"
/**
 *print_numbers - Entry point
 *@separator: input separator is the first argument
 *@n: input n is the second argument
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;

	unsigned int i;

	char *s;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
