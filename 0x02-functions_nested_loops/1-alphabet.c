#include <main.h>

/**
 * print_alphabet - some explain
 * Description: printing alphabet
 * Return: return 0 always
 */

int print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
