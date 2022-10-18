#include <stdio.h>

/**
 * main - print alphabet and exlude char q and e
 * Description: look above
 * Return: return (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	putchar('\n');
	return (0);
}
