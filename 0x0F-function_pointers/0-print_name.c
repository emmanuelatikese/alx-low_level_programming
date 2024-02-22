#include "function_pointers.h"

/**
 * print_name - takes a pointer and char
 * @name: a char pointer
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
