#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - prints the length on str
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
int i;
for (i = 0 ; *s != "\0'; i++)
{
	s++;
}
return (i);
}
