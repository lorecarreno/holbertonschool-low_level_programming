#include <stdio.h>

/**
* main - Prints the alphabet in lower case.
* Return: 0
*/

int main(void)
{
	char letra;

	for (letra = 'a' ; letra <= 'z' ; letra++)
	{
		putchar(letra);
	}
	putchar(10);
	return (0);
}
