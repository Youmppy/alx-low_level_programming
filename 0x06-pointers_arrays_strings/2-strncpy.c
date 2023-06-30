#include "main.h"
#include <stdio.h>

/**
 * _strncpy - cpy fitst ti second
 *@n: number of elements coppied
 * @dest:1st str
 * @src: 2nd str
 * Return: Always 0.
 */
 char *_strncpy(char *dest, char *src, int n)
{
int i =0;

for (i = 0; *(src + i) != '\0' && i < n ; i++)
{
dest[i] = src[i];
}
while (i < n )
{
dest[i] = '\0';
i++;
}
return(dest);
}
