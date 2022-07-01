#include <ctype.h>
#include <stdlib.h>
#include <time.h>
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

	for (b = 'A' ; b <= 'Z' ; b++)
	{
		putchar(tolower(b));
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(toupper(c));
	}
	putchar('\n');
	return (0);
}
