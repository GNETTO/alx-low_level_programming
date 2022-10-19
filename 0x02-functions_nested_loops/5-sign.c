#include "main.h"

/**
 * print_sign - print sign
 * @n : number
 * Description: some for
 * Return: return 0 always
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
