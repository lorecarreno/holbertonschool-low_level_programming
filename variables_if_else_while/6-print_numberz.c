#include <stdio.h>

/**
 * main - Prints the all single numbers of base 10.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
