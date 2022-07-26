#include "main.h"
/**
 * create_array - creates an array of c
 * @size: size of the array.
 *@c: storaged char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = char *malloc(size * sizeof(c));
	if (ptr == null)
		return (0);
	for (i = 0, i < size, i++)
		ptr[i] = c;
	return (cr);
}
