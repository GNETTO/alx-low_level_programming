#include <stdio.h>

/**
 * main -
 * Deascription: printing alphabet
 * Return: return 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}
