#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - imprime una cadena de caracteres,
 * seguida de un salto de linea
 * @s: string to be printed
 *i
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
