#include <stdio.h>

/**
 * main - combinison of number
 * Description: above
 * Return: return always 0
 */

int main(void)
{
	int row, col;

	for (row = 48; row <= 57; row++)
	{
		for (col = row + 1; col <= 57; col++)
		{
			putchar(row);
			putchar(col);
			if (row != 57 || col != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
