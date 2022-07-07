#include <stdio.h>
/**
 * main - print prime factors)
 *
 * Return: Always 0
 */
int main(void)
{
	long a = 612852475143, div;

	while (div < (a / 2))
	{
		if ((a % 2) == 0)
		{
			a /= 2;
			continue;
		}
		for (div = 3; div < (a / 2); div += 2)
		{
			if ((a % div) == 0)
				a /= div;
		}
	}
	printf("%ld\n", a);
	return (0);
}
