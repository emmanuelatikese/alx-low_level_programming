#include "main.h"
/**
 * main - Entry point
 *@argc: input argc is the first argument
 *@argv: input argv is the second argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
