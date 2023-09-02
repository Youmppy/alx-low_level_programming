#include <stdio.h>

/**
 * *_strcat - adds 2nd to 1st string
 * @dest: st 1
 * @src: st 2
 * Return: dest new value.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int i2 = 0;

	for (i = 0 ; *(dest + i) != '\0'; i++)
		;

	while (*(src + i2) != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	return (dest);

}
