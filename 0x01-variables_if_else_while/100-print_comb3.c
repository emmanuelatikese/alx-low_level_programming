#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int first, last;
	/* betty style doc for function main goes there */
	for (first = 0; first < 9; first++)
	{
		if (first == 5 && last < 6)
		{
			continue;
		}
		if (first == 7 && last < 8)
		{
			continue;
		}
		for (last = 1; last < 10; last++)
		{
			putchar((first % 10) + '0');
			putchar((last % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
