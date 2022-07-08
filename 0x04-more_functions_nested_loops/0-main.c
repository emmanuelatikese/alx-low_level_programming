#include "main.h"
#include <stdio.h>
#include "0-isupper.c"
#include "_putchar.c"
#include "1-isdigit.c"
#include "2-mul.c"
#include "3-print_numbers.c"
#include "4-print_most_numbers.c"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
