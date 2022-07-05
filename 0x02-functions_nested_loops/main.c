#include "main.h"
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "_putchar.c"

int main(void)
{
	int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
