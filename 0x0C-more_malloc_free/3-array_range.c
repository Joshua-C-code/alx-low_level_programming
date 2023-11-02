#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: If min > max, return NULL, else return a pointer to the new  array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
