#include "main.h"
#include <stdio.h>
#include "_putchar.c"
#include "0-strcat.c"
#include "1-strncat.c"
#include "2-strncpy.c"
#include "3-strcmp.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
