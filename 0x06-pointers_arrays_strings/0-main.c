#include "main.h"
#include <stdio.h>
#include "_putchar.c"
#include "0-strcat.c"
#include "1-strncat.c"
#include "2-strncpy.c"
#include "3-strcmp.c"
#include "5-string_toupper.c"
#include "7-leet.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
