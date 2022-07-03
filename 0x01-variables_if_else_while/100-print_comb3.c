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
		for (last = 1; last < 10; last++)
		{
			if (first == 5 && last < 6)
				continue;
			if (first == 8 && last < 9)
				continue;
			putchar((first % 10) + '0');
			putchar((last % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
