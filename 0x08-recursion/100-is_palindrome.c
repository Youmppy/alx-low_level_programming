#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return 1 + _strlen_recursion(s + 1);
}

/**
 * checker - Recursive helper function to check if a string is a palindrome
 *
 * Return: 1 if palindrome, 0 if not.
 */
int checker(char *s, int d, int f)
{
	if (d >= f)
		return 1;
	if (s[d] == s[f])
		return checker(s, d + 1, f - 1);
	else
		return 0;
}

/**
 * is_palindrome - function that checks if a string is a palindrome
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);
	return checker(s, 0, n - 1);
}
