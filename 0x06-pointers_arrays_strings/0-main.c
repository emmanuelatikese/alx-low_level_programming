#include "main.h"
#include <stdio.h>
#include "_putchar.c"
#include "0-strcat.c"
#include "1-strncat.c"
#include "2-strncpy.c"
#include "3-strcmp.c"
#include "5-string_toupper.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 	char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);   

}
