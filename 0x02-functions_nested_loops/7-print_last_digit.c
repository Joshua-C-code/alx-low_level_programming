#include "main.h"
/**
 * Print_last_digit - print last digit
 * @f: function parameter
 * Return: l
 */

int print_last_digit(int f)
{
	int l;

	l = f % 10;
	if (f < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
