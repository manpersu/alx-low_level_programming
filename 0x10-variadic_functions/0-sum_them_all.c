#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - It sum all the variable arguments
 * @n:  Arguments to sum
 *
 * Return: Returns the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list va;
	int sum, i;

	va_start(va, n);/* Initialize the argument list. */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(va, int);/* Get the next argument value. */
	va_end(va);
	return (sum);
}
