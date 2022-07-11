#include "main.h"
#include "0-reset_to_98.c"
#include "1-swap.c"
#include "2-strlen.c"
#include "_putchar.c"
#include "3-puts.c"
#include "4-print_rev.c"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
