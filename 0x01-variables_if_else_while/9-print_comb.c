#include <stdio.h>

/**
 * main - search
 * Description: all number combinaison here
 * Return: return always 0 (success)
 */

int main(void)
{
	int row, col;

	for (row = 48; row <= 57; row++)
	{

		putchar(row);
		if (row != 57 || col != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
