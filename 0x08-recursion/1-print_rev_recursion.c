#include "main.h"

/**
 * _print_rev_recursion - function that prints reverse string
 * @s: string
 * Return: Always 0.
 */
void
_print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		int i=1;
		_print_rev_recursion((s+i));
		_putchar(*s);
	}
	return(0);
}
