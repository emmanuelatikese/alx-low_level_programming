#ifndef _VARIADIC_FUNCTIONS__H__
#define _VARIADIC_FUNCTIONS__H__
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
