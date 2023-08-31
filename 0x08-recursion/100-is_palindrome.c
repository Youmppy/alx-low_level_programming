#include "main.h"
#include <stdio.h>

int check_function(char *s, int z, int n)
{
	if (s[z] != s[n])
		return (0);
	if (n <= z)
		return (1);
	return (check_function(s, z + 1, n - 1));
}

int is_palindrome(char *s)
{
	unsigned int n;
	n = _strlen_recursion(s);
	return (check_function(s, 0, n - 1));
}
