#include <stdio.h>
#include "main.h"

/**
 * main - prime numbers
 * find the largest prime number of 612852475143
 *
 * Return: 0
 */

int main(void)
{
long int i, j, k;

i = 612852475143;
j = 2;
k = 2;

while (i > k)
{
	if (i % k == 0)
	{
		j = k;
		i = i / j;
		k = j + 1;

	}
	else
		k++;
}
		printf("%ld\n", i);
return (0);

}
