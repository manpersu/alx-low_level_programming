#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers and strings in-between
 * @separator: String printed between numbers
 * @n: Number of integers passed to the functions
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list p_num;

	va_start(p_num, n);
	for (x = 0; x < n; x++)
	{
		if (separator != NULL && i > 0)
		/**
		 * This validates & ensures that separator
		 * is not printed at begining of line *
		 */
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(p_num, int);
	}
	va_end(p_num);
	printf("\n");
}
