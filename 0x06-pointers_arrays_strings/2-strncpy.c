#include "main.h"
#include <stdio.h>

/**
*_strncpy - a program that concatenates two strings
*@n: length of integer
*@src: string's source
*@dest: string's destination
*Return: pointer to the rsulting dest's string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		dest[i] = src[i];
	i++;
	}
	return (src);
}
