#include "lists.h"
/**
 * add_nodeint - adds a node at the end
 * @head: start of node
 * @n: value to give new node
 * Return: the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_record;
	new_record = malloc(sizeof(listint_t));

	if (new_record == NULL)
		return (NULL);
	new_record->n = n;
	new_record->next = *head;

	*head = new_record;

	return (*head);
}
