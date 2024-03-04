#include "3-calc.h"
#include <unistd.h>

/**
 * convertInt - convert int to str
 * @num: int
 * @ptr1: str pointer
 */

void convertInt(int num, char *ptr1)
{
	int i = 0, a = 0;
	char ptr[10];

	while (num != 0 && num > 0)
	{
		ptr[i] = (num % 10) + '0';
		i++;
		num /= 10;
	}
	ptr[i] = '\0';
	i -= 1;
	while (i > -1)
	{
		ptr1[a] = ptr[i];
		i -= 1;
		a++;
	}
	ptr1[a] = '\0';
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - write strings
 * @s: this is const char
 */

void _putstr(const char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * cus_strcmp - This str compares
 * @s1: const char
 * @s2: const char
 * Return: returns int
 */

int cus_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (1);
		s1++;
		s2++;
	}
	return (*s1 || *s2);
}


/**
 * main - holds all functions together
 * @argv: list of args
 * @argc: lenght of args
 * Return: return int
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	int (*ans)(int, int);
	char *s = argv[2];
	char dg[10];

	if (argc < 4)
	{
		_putstr("Error");
		return (98);
	}
	a = atoi(argv[1]), b = atoi(argv[3]);
	if (b == 0 && (cus_strcmp(s, "%") || cus_strcmp(s, "/")))
	{
		_putstr("Error");
		return (100);
	}

	ans = get_op_func(s);
	if (ans == NULL)
	{
		_putstr("Error");
		return (99);
	}
	res = ans(a, b);
	if (res == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		if (res < 0)
		{
			_putchar('-');
			res = -res;
		}
		convertInt(res, dg);
		_putstr(dg);
	}
	return (res);
}
