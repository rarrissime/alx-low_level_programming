#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates two strings
 *@dest: appended ne
 *@src: appends to dest
 *Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
		dest[b++] = src[a];
	return (dest);
}
