#include "main.h"
/**
 * argstostr- Entry point
 *@ac: input ac is the first argument
 *@av: input av is the second argument
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d = ac;

	char *e;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	e = malloc(sizeof(char) * d + 1);
	if (e == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			e[c++] = av[a][b];
		}
		w[c++] = '\n';
	}
	w[d] = '\0';
	return (e);
}
