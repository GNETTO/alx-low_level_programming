#include <stdio.h>

/**
 * main - reverse order
 * Description: look above
 * Return: return 0 always (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
