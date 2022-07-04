#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	/* betty style doc for function main goes there */
	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
