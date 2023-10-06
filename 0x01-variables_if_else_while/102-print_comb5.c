#include <stdio.h>

/**
 * main -main function
 *
 * Return: not always 0
 */
int main(void)
{
	int i, j;

	for (i = 0 ; j <= 99; i++)
	{
		int tens1 = i / 10;
		int units1 = i % 10;

		for (j = i ; j <= 99 ; j++)
		{
			int tens2 = j / 10;
			int units2 = j % 10;

			putchar(tens1 + '0');
			putchar(units1 + '0');
			putchar(' ');

			putchar(tens2 + '0');
			putchar(units2 + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
