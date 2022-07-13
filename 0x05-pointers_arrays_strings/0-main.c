#include "main.h"
#include "_putchar.c"
#include "5-rev_string.c"
#include "9-strcpy.c"
#include "8-print_array.c"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
