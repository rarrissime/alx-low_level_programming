#include "main.h"

/**
 * _strlen_recursion - print string length
 * @s: string to reverse
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	int a = _strlen_recursion(s + 1);
	a ++;
	return(a);
	_putchar('\n')'
}
