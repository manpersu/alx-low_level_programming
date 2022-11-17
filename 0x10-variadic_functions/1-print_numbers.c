#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers with string in-between
 * @separator: seperator string
 * @n: number of arguments passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list print_numbers;

	va_start(print_numbers, n);
	for (; x < n; x++)
	{
		if (separator != NULL && x > 0)
			printf("%s", separator);
		printf("%d", va_arg(print_numbers, int));
	}
	va_end(print_numbers);
	printf("\n");
}
