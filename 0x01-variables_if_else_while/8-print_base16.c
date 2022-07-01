#include <stdio.h>
/**
* main- Entry point
* Description: 'print n as negative or positive'
* Return: Always 0(success)
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int b, c;

	for (b = 0 ; b < 10 ; b++)
	{
		putchar((b % 10) + '0');
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
