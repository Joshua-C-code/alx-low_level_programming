#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list list;

	va_start(list, format);

	if (format)
	{
		for (i = 0; format[i]; ++i)
		{
			if (i > 0)
				printf(", ");

			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':

					{
						char *str = va_arg(list, char *);

						printf("%s", (str ? str : "(nil)"));
					}
					break;
			}
		}
	}

	printf("\n");
	va_end(list);
}

