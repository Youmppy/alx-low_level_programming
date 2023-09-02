#include <stdio.h>
#include <string.h>
/**
 * _puts - prints the  str
 * @str: string
 * Return: str
 */
void _puts(char *str)
{
while (*str != '\0')
{
	putchar(*str);
	str++;
}
	putchar('\n');
}
