#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list Args;
	char *strArg;

	va_start(Args, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(Args, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(Args);
	printf("\n");
}
