#include "main.h"
/**
* print_alphabet_x10 - print a
*return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int a, b = 1;

	while (b <= 10)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar (a);
		}
	b++;
	_putchar ('\n');
	}
}
