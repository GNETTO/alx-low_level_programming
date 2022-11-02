#include "main.h"

/**
 * swap_int - swap 2 variables
 * @a : int pointer
 * @b : int pointer
 * Return : return void
 */

void swap_int(int *a, int *b)
{
	int save_old_a = *a;
	*a = *b;
	*b = save_old_a;
}
