#include <stdio.h>
/**
 * print_fibonacci_sequence - this is a fibonnaci sequence
 * main - Function to print the first 'count' Fibonacci numbers
 * @param count Number of Fibonacci numbers to print
 * Return: 0
 */
void print_fibonacci_sequence(int count)
{
	int first = 1, second = 2;

	printf("%d, %d", first, second);

	for (int i = 3; i <= count; i++)
	{
		int next = first + second;

			printf(", %d", next);

		first = second;
		second = next;
	}
	printf("\n");
}

int main(void)
{
	int count = 98;

	print_fibonacci_sequence(count);
	return (0);
}
