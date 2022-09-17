#include "main.h"

/**
 * print_number - prints a number
 * @n: numbers to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int i = 1, j = 0, k = 0;

	if (n < 0)
	{ 
		_putchar('-');
		n = -n;

	}

	while (n / i !=0)
	{
		i*= 10;
		j++;
	}
	i = i / 10;

	while (k < j)
	{
		_putchar('0' + n / i);
		n = n - (n / i) * i;
		i = i / 10;
		k++;
	}

	if (j == 0)
		_putchar('0' + n);

}







