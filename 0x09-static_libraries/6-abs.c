#include "main.h"
/**
 * _abs - function to find the absolute value of a number
 * @f: function parameter
 * Return: -f or f;
 */

int _abs(int f)
{
	if (f < 0)
		return (-f);
	else if (f >= 0)
	{
		return (f);
	}

	return (0);
}
