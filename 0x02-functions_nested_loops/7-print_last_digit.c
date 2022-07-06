#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @b: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int b)
{
	int a;

	a = (b % 10);

	if (a < 0)
	{
		a = (-1 * a);
	}
	_putchar(a + '0');
	return (a);
}
