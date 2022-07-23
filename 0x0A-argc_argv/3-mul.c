#include "main.h"
/**
 * main - Entry point
 *@argc: input argc is the first argument
 *@argv: input argv is the second argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
