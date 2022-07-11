#include "main.h"
#include "0-reset_to_98.c"
#include "1-swap.c"
#include "2-strlen.c"
#include "_putchar.c"
#include "3-puts.c"
#include "4-print_rev.c"
#include "6-puts2.c"
#include "7-puts_half.c"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
