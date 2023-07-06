#include "main.h"

/**
 * _puts_recursion - function prints by rcursion
 * @s: string to print
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
	}
	return (0);
}
