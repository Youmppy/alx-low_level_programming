#include "main.h"

/**
*_strncat - a program that concatenates two strings
*@n: length of integer
*@src: string's source
*@dest: string's destination
*Return: pointer to the rsulting dest's string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int i2 = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	while (i2 < n && *(src + i2) != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	return (dest);
}
