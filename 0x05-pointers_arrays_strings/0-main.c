#include "main.h"
#include "0-reset_to_98.c"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);	
}
