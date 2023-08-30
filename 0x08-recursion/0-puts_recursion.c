#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The input string to be printed.
 *
 * Description: This function recursively prints each character
 * of the input string until the null terminator is reached.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
