#include "main.h"
/**
 * _isupper - Entry point
 *@c: input is surely will need a character for a purpose
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
