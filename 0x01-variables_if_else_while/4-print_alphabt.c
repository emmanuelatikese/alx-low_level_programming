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
	do {
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}
			putchar(letter);
			letter++;
	} while (letter <= 'z');
	printf("\n");
	return (0);
}
