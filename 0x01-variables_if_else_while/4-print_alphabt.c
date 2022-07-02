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
			printf("\n");
			letter++;
	} while (letter <= 'z');
	return (0);
}
