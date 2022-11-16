#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - array index
 * @array: array to loop through
 * @size: size of array
 * @cmp: function pointer to a function that compares if an element is an int
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
