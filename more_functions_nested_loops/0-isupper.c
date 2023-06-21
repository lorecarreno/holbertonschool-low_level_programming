#include "main.h"

/**
 * _isupper - Check for uppercase character.
 * @c: Charater to check
 * Return: 1 if c is lowercase, return 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
