#include "main.h"

/**
 * print_alphabet_x10 - some explain
 * Description: some for
 * Return: return 0 always
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;


	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
