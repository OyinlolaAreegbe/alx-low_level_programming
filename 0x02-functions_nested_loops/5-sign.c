#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is being tested
 *
 * Return: Always 0 9Success)
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
			_putchar ('0');
			return (0);
	}

		else if (n < 0)
		{
			_putchar ('-');
			return (-1);
		}
		return (0);
}