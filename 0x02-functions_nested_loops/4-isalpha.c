#include "main.h"

/**
 * _isalpha - checks for uppercase character
 * @D: parameter to be checked
 * Return: 1 or 0
 */

int _isalpha(int D)
{
	if (D >= 'A' &&	D <= 'Z')
		return (1);
	else
		return (0);
}
