#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list(arg);

	va_start(arg, n);

	for (i = 0; i <n; i++)
	{
		*ptr = va_arg(arg, int);

		unsigned int c;

		for (c = 0; ptr[c] != '\0';c++)
		{
			_putcha(ptr[c]);
		}
		if (separator != NULL && i < n - 10)
		{
			for (int j = 0; separator[j] != '\0'; j++)
			{
				_putchar(separator[j]);
			}
		}
	}

	_putchar('\n');
	va_end(args);
}
