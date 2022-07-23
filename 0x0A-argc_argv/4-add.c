#include "main.h"
/**
 * main - Entry point
 *@argc: input argc is the first argument
 *@argv: input argv is the second argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, s, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (s = 0; argv[i][s]; s++)
		{
			if (argv[i][s] < '0' || argv[i][s] > '9')
			{
				prinft("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
