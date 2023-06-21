#include "main.h"

/**
  * _islower - check for lowercase character.
  * @c: Character to check.
  * Return: 1 is c is lowercase, return 0 otherwise.
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
