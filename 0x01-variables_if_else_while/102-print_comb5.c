#include <stdio.h>
/**
* main- Entry
* Description: 'print n as negative or positive'
* Return: Always 0(successs)
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int a, b;

	for (a = 0 ; a <= 99 ; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
				if (a == 98 && b == 99)
					continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
