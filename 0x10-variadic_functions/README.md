#0x10-variadic_functions

**General**
. What are variadic functions
. How to use va_start, va_arg and va_end macros
. Why and how to use the const type qualifier

##Exercises:
**0. Beauty is variable, ugliness is constant
	*Write a function that returns the sum of all its parameters.
		. Prototype: int sum_them_all(const unsigned int n, ...);
		. If n == 0, return 0
**1. To be is to be the value of a variable
	. Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
	. where separator is the string to be printed between numbers
	. and n is the number of integers passed to the function
	. You are allowed to use printf
	. If separator is NULL, don’t print it
	. Print a new line at the end of your function
