#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function recursive input string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	i++;
	s++;
	return (i + _strlen_recursion(s));
}
