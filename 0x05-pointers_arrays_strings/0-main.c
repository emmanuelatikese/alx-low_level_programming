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
	 char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
