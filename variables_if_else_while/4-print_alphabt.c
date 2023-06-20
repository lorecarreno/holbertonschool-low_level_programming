#include <stdio.h>

/**
 * main - Prints the alphabet in lower case, except 'e' and 'q' letters.
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
