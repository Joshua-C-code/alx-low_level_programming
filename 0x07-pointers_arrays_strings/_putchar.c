#include <unistd.h>

/**
 * _putchar - wrotes the character c to stdout
 * @c: The character to print
 * Return: 1 on success
 * on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
