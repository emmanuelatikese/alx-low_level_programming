#include "main.h"
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "_putchar.c"
#include "4-isalpha.c"
#include "5-sign.c"
#include "6-abs.c"
#include "7-print_last_digit.c"
int main(void)
{
	int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);	
}
