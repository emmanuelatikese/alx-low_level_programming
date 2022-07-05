#include "main.h"
/**
 * _isalpha - Entry point
 *@c: input c is a character
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 60 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
