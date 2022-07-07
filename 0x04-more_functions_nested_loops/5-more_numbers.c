#include "main.h"

/**
 *more_numbers - print 0 to 14,10 times
 *Return: Always 0;
 */

void more_numbers(void)
{
	int a, b;

	b = 0;
	while (b < 10)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a > 9)
				_putchar ((a / 10) + '0');
			_putchar ((a % 10) + '0');
		}
		b++;
		_putchar ('\n');
	}
}
