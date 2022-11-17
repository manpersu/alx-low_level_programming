#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: seperator string
 * @n: number of arguments passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list print_strings;

	va_start(print_numbers, n);
	for (; x < n; x++)
	{
		if (separator != NULL && x > 0)
			printf("%s", separator);
		if (va_arg(print_strings, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(print_strings, char *));
	}
	va_end(print_strings);
	printf("\n");
}
