#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of even-valued terms 
 * in the fibonacci sequence
 * not exceeding 4000000
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i = 0, j = 1, fibsum;
	float tot_sum;

	while (1)
	{
			fibsum = i + j;
			if (fibsum > 4000000)
				break;

			if ((fibsum % 2) == 0)
				tot_sum += fibsum;

			i = j;
			j = fibsum;
	}
	printf("%.0f\n", tot_sum);

			return (0);

			}
