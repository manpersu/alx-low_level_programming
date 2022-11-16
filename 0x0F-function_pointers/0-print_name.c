#include <stdio.h>
#include <stdilib.h>
#include <functional_pointers.h>
/**
 * print_name - prints the name passed as an argument
 * @name: the name passed to the function as a parameter
 * @f: function pointer that serve as a callback
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
