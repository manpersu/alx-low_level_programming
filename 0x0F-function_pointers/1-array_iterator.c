#include <stdiolib.h>
#include <stdio.h>
#include <function_pointers.h>
/**
 * array_iterator - loops through the array
 * @array: the array to be looped through
 * @size: the size of the array
 * @action: the function pointer to process the array
 */
void array_iterator(int *array, size_t size, void (*action)(int)
		{
		unsigned int i = 0;

		if (array == NULL || action == NULL)
		{
		exit(98);
		}
		for (; i < size; i++)
		{
		action(array[i]);
		}
		}
