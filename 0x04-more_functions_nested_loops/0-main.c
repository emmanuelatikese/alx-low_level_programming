#include "main.h"
#include "0-isupper.c"
#include "_putchar.c"
#include "1-isdigit.c"
#include "2-mul.c"
#include "3-print_numbers.c"
#include "4-print_most_numbers.c"
#include "5-more_numbers.c"
#include "6-print_line.c"
#include "8-print_square.c"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	   char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
