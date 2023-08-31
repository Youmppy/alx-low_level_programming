#include "main.h"
#include <stdio.h>

/**
 * check_function - Checks if a substring is a palindrome using recursion.
 * @s: The input string.
 * @z: The starting index of the substring.
 * @n: The ending index of the substring.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_function(char *s, int z, int n)
{
	if (s[z] != s[n])
		return (0);
	if (n <= z)
		return (1);
	return (check_function(s, z + 1, n - 1));
}
/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function e length of the input string.
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
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	unsigned int n;

	n = _strlen_recursion(s);
	return (check_function(s, 0, n - 1));
}

