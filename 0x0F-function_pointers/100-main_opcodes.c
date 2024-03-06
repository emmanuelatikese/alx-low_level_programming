#include <stdio.h>
/**
 * main - prints hex
 * @argv: list of args
 * @argc: len of args
 * Return: returns int
 */

int main(int argc, char *argv[])
{
	int i = 0, a;
	char *b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = (char *)main;

	if (a < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i <= a; i++)
	{
		if (i > 0 && i <= a)
		{
			printf(" ");
		}
		printf("%02hhx", b[i]);
		if (i == a)
			printf("\n");
	}
	return (0);
}
