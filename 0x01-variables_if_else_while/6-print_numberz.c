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
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	printf("\n");
	return (0);
}
