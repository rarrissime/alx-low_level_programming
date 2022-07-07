#include <stdio.h>
/**
 * main - fizzbuzz
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 1; a <= 100; a++)
	{
		b = (a % 15);
		c = (a % 3);
		d = (a % 5);
		if (b == 0)
			printf("Fizzbuzz");
		else if (c == 0)
			printf("Fizz");
		else if (d == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
