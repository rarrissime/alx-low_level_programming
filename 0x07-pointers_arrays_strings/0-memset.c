#include "main.h"
#include <stdio.h>
/**
 * _memset - fill memory with constant byte
 * @s:pointer block of memory to fill
 * @b: value to fill
 * @n: size of byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b; /* adds position of i to s?*/
	return (s);
}
