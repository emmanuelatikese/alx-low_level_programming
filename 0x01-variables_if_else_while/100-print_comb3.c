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
			if (first == 2 && last < 3)
				continue;
			if (first == 3 && last < 4)
				continue;
			if (first == 4 && last < 5)
				continue;
			if (first == 6 && last < 7)
				continue;
			if (first == 7 && last < 8)
				continue;
			if (first == 1 && last == 1)
				continue;
			putchar((first % 10) + '0');
			putchar((last % 10) + '0');
			if (first < 8)
			{
				putchar(',');
				putchar(' ');
			{
		}
	}
	putchar('\n');
	return (0);
}
