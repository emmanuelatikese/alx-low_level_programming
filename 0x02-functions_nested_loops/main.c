#include "main.h"
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "_putchar.c"
#include "4-isalpha.c"
#include "5-sign.c"
#include "6-abs.c"
#include <stdio.h>
int main(void)
{
	
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
