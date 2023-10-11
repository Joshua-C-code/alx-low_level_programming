#include "main.h"
#include <stdio.h>
/**
 * print_times_table - the main function prints a times table
 * @n: function parameter
 * Return: The times table
 */

void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n > 15 || n < 0)

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			result = i * j;

			if (j == 0)
				printf("%d", result);
			else if (result < 10)
				printf(", %d", result);
			else if (result < 100)
				printf(", %d", result);
			else
				printf(", %d", result);
		}
	}
}
