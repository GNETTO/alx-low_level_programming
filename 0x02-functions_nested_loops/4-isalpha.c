#include "main.h"

/**
 * _isalpha - check for alphabetic
 * @c: character entered
 * Description: some for
 * Return: return 1 if alphat or 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
