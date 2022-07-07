#include "main.h"

/**
 *print_square - print diagonal different times
 *@n: underscore
 *Return: Always 0;
 */

void print_square(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
				_putchar ('#');
			if (a == n - 1)
				continue;
			_putchar ('\n');
		}
	}
	_putchar ('\n');
	/**
	 * a is how many times \ is printed
	 */
}
