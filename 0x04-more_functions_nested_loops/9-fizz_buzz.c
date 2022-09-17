#include <stdio.h>

/**
 * main - Fizz Buzzn for job interviews
 * print numbers 1 to 100 where multiples of 3
 * are replaced with Fizz and
 * multiples of 5 are replaced with Buzz
 * 3 and 5 with FizzBuzz
 *
 * Return: void
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;

	}
	putchar('\n');

	return (0);

}

