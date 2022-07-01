#include <ctype.h>
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
	int b;

	for (b = 'A' ; b <= 'Z' ; b++)
	{
		putchar(tolower(b));
	}
	putchar('\n');
	return (0);
}

