#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - comparerandom value
 * Description: it is super
 * Return: Always 0 (Success)
 */


int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is greater than 5\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is less than 5\n", n);
	return (0);

}
