#include <stdio.h>

/**
 * *_strncat - adds 2nd to 1st
 * @dest: 1st stt
 * @src: 2md str
 * @n: num of int
 * Return: dest new value.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int i2 = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	while (i2 < n)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	return (dest);
}
