#include <ctype.h>
#include <stdio.h>
/**
*  * main- Entry point
*
*   * Description: 'print b reveresed alphabet lowercase'
*
*    * Return: Always 0(success)
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int b;

	for (b = 'z' ; b >= 'a' ; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
