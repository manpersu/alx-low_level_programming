#include "lists.h"
/**
 * print_listint - prints integers in list
 * @h: struct of the type listint_t
 * Return: size_t value
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
