#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	/* betty style doc for function main goes there */
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
