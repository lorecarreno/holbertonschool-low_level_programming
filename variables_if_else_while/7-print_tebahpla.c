#include <stdio.h>

/**
 * main - Prints the alphabet in lower case in reverse.
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
