#include "main.h"
/**
 * puts_half - Entry point
 *@str: input str is an argument
 * Return: Always 0
 */
void puts_half(char *str)
{
	int x, y, i;

	for (x = 0; str[x] != '\0'; )
		x++;
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n');
}
