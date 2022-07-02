#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	/* betty style doc for function main goes there */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	printf("\n");
	return (0);
}
