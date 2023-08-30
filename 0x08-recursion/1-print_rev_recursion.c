#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The input string to be printed in reverse.
 *
 * Description: This function recursively prints each character
 * of the input string in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		char *p = s;

		s++;
		_print_rev_recursion(s);
		_putchar(*p);
	}
}
