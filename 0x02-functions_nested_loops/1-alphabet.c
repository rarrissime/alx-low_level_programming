#include "main.h"
/**
 * print_alphabet - print lowercase
 * return: always 0(success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}
