#include "main.h"

/**
 * _strlen_recursion - function that prints the length of string
 * @s: string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		return (i + _strlen_recursion((s + 1)));
	}
	else
	{
		return (0);
	}
}
