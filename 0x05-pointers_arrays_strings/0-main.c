#include "main.h"
#include "0-reset_to_98.c"
#include "1-swap.c"
#include "2-strlen.c"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
