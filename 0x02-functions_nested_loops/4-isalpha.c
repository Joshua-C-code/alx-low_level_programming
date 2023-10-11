#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @D: parameter to be checked
 * Return: 1 or 0
 */

int _isalpha(int D)
{
	if ((D >= 'A' && D <= 'Z') || (D >= 'a' && D <= 'z'))
		return (1);
	else
		return (0);
}
