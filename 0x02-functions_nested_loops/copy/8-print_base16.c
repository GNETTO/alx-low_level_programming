#include <stdio.h>

/**
 * main - hexadecimal number
 * Description: above
 *Return: return always 0 (success)
 */

int main(void)
{
	char num;
	char letter;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (letter = 97; letter <= 102; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
