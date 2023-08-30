#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function recursively calculates the length of inp.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		s++;
		return (i + _strlen_recursion(s));
	}
	return (0);
}

