#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 1, b;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			b += n;
		}
		n++;
	}
	printf("%d", b);
	printf("\n");
	return (0);
}
