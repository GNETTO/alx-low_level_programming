#include  "main.h"

/**
 * _isdigit - chacks if input is a digit
 * @c:int
 * Return: 1 if digit or 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
