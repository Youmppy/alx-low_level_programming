#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints the  str
 * @s: string
 * Return: str
 */
void print_rev(char *s)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++)
		;

	i = i - 1;
	while (i != -1)
	{
		putchar(*(s + i));
		i = i - 1;
	}
	putchar('\n');	
}
