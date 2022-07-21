#include "main.h"

/**
 * _puts_recursion - print string with line
 * @s: string to be printed
 * Return: always s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar ('\n');
	_putchar('*s');
	_puts_recursion(*s + 1);
}
