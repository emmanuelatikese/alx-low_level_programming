#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 48;
	/* betty style doc for function main goes there */
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
